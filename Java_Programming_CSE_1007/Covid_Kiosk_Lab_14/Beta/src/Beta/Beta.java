package Beta;
import com.database.util.conutil;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.io.File;
import javafx.animation.KeyFrame;
import javafx.animation.KeyValue;
import javafx.animation.Timeline;
import javafx.application.Application;
import static javafx.application.Application.launch;
import javafx.application.Platform;
import javafx.collections.FXCollections;
import javafx.geometry.HPos;
import javafx.geometry.VPos;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.chart.CategoryAxis;
import javafx.scene.chart.LineChart;
import javafx.scene.chart.NumberAxis;
import javafx.scene.chart.XYChart;
import javafx.scene.control.*;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.scene.text.FontWeight;
import javafx.stage.Stage;
import javafx.stage.Window;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.text.Font;
import javafx.scene.text.Text;
import javafx.util.*;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
public class Beta extends Application {
	String jdbcUrl = "jdbc:mysql://localhost:3306/servername";//Use your own db url
	String username = "root";
	String password = "root";
	final String JDBC_DRIVER = "com.mysql.jdbc.Driver";
	
	public void start(Stage primaryStage)throws Exception
	{
		primaryStage.setTitle("COVID -19 Tracker");
		BorderPane root=new BorderPane();
		Label l1=new Label("Maharashtra");
		l1.setAlignment(Pos.CENTER);
		l1.setStyle("-fx-font: normal bold 20px 'Verdana';-fx-text-fill: WHITE   ");
		root.setTop(l1);
		BorderPane.setAlignment(l1,Pos.CENTER);
		root.setPadding(new Insets(10,10,10,10));
		
		
		Text msg=new Text("Stay Home || Stay Safe ");
		msg.setFill(Color.WHITE);
		msg.setTextOrigin(VPos.TOP);
		msg.setFont(Font.font("Verdana", FontWeight.EXTRA_BOLD,25));
		
		

		
		GridPane grid=createPane();
		addUI(grid);
		
		Pane p=new Pane(msg);
		VBox vb=new VBox();
		vb.getChildren().addAll(p,grid);
		vb.setSpacing(10);
		root.setCenter(vb);
		root.setStyle("-fx-background-color: lightblue");
		Scene scene =new Scene(root,1000,500);
		
		//File f=new File("style.css");
		scene.getStylesheets().clear();
		
		scene.getStylesheets().add("Beta/style.css" ); //ADD The path to the css file
		primaryStage.setScene(scene);
		primaryStage.show();
		
		double sceneWidth = scene.getWidth();
	    double msgWidth = msg.getLayoutBounds().getWidth();

	    KeyValue initKeyValue = new KeyValue(msg.translateXProperty(), sceneWidth);
	    KeyFrame initFrame = new KeyFrame(Duration.ZERO, initKeyValue);

	    KeyValue endKeyValue = new KeyValue(msg.translateXProperty(), -1.0
	        * msgWidth);
	    KeyFrame endFrame = new KeyFrame(Duration.seconds(10), endKeyValue);

	    Timeline timeline = new Timeline(initFrame, endFrame);

	    timeline.setCycleCount(Timeline.INDEFINITE);
	    timeline.play();
		
		
		
	}
	private GridPane createPane()
	{
		GridPane gridPane = new GridPane();
        
        
        gridPane.setAlignment(Pos.CENTER);
        gridPane.setPadding(new Insets(40, 40, 40, 40));
        gridPane.setHgap(20);
        gridPane.setVgap(20);
        
        return gridPane;
	}
	private void addUI(GridPane gridPane)
	{
		
		Label conf=new Label("Confirmed");
		
		Label acti=new Label("Active");
		
		Label rec=new Label("Recovered");
		
		Label Dec=new Label("Deceased");
                
                Label Image = new Label();
                final ImageView imgview = new ImageView();
                final Image image2 = new Image(Beta.class.getResourceAsStream("india.png"));
                imgview.setImage(image2);
		
		conf.setId("conf");
		acti.setId("act");
		rec.setId("rec");
		Dec.setId("dec");
		
		gridPane.add(conf,1,0);
		gridPane.add(acti,2,0);
		gridPane.add(rec,3,0);
		gridPane.add(Dec,4,0);
		Connection conn = conutil.connectdb();
		Statement stmt = null;
		Label ci=new Label();
		Label ai=new Label();
		Label ri=new Label();
		Label di=new Label();
                ci.setText(Integer.toString(5000));
                ai.setText(Integer.toString(4568));
                ri.setText(Integer.toString(200));
                di.setText(Integer.toString(150));
		try
		{
			
			stmt = conn.createStatement();

			ResultSet rs=stmt.executeQuery("SELECT* FROM covid where State='India'");
			while(rs.next())
			{
				int c=rs.getInt("Confirmed");
				int a=rs.getInt("Active");
				int r=rs.getInt("Recovered");
				int d=rs.getInt("Deceased");
				ci.setText(Integer.toString(c));
				ai.setText(Integer.toString(a));
				ri.setText(Integer.toString(r));
				di.setText(Integer.toString(d));
				
				
				
				System.out.println("Table created");
			}
			} 
			catch(Exception e)
			{
				e.printStackTrace();
			}
	
			
		
		
		
		ci.setId("conf");
		ai.setId("act");
		ri.setId("rec");
		di.setId("dec");
		gridPane.add(ci,1,1);
		gridPane.add(ai,2,1);
		gridPane.add(ri,3,1);
		gridPane.add(di,4,1);
		//gridPane.add(imgview, 5, 1);
		
		Button btn1=new Button("Check India Graph");
		btn1.setId("graph");
		gridPane.add(btn1,2,2,2,2);
		btn1.setOnAction(e->{
			
			CategoryAxis xAxis = new CategoryAxis();
	       xAxis.setLabel("Date");

	        NumberAxis yAxis = new NumberAxis();
	        yAxis.setLabel("No of Cases");

	        final LineChart<String,Number> lineChart = new LineChart<String,Number>(xAxis, yAxis);
	        lineChart.setTitle(" COVID 19 CURVE, INDIA");
	        XYChart.Series dataSeries1 = new XYChart.Series();
	        dataSeries1.setName("COVID-19 Cases");
	        
	        
	        try
			{
			
			Statement st=null;
			st=conn.createStatement();
			ResultSet rs=st.executeQuery("SELECT* FROM data");
			while(rs.next())
			{
				String c=rs.getString("Date");
				int a=rs.getInt("Confirmed");
				
				 dataSeries1.getData().add(new XYChart.Data(c,a));
				
				
				System.out.println("Table created");
			}
			}
			catch(Exception e1)
			{
				e1.printStackTrace();
		
	        
	       
	       
	        

	        lineChart.getData().add(dataSeries1);
	        

			
			StackPane sec=new StackPane();
			sec.getChildren().add(lineChart);
			Scene secscene=new Scene(sec,800,500);
			Stage newwindow=new Stage();
			newwindow.setTitle("Graph of cases in India");
			newwindow.setScene(secscene);
			
			newwindow.setX(200);
			newwindow.setX(100);
			newwindow.show();
		});
		
	
		
		Button maha=new Button("Maharashtra");
		Button guj=new Button("Gujarat");
		Button del=new Button("Delhi");
		Button raj=new Button("Rajasthan");
		Button mp=new Button("MadhyaPradesh");
		Button tn=new Button("Tamil Nadu");
		
		//For Maharashtra database
		Label mci=new Label();
		Label mai=new Label();
		Label mri=new Label();
		Label mdi=new Label();
		mci.setId("conf");
		mai.setId("act");
		mri.setId("rec");
		mdi.setId("dec");
		gridPane.add(mci,1,4);
		gridPane.add(mai,2,4);
		gridPane.add(mri,3,4);
		gridPane.add(mdi,4,4);
		maha.setOnAction(e->
		{
			try
			{
			
			Statement st=null;
			st=conn.createStatement();
			ResultSet rs=st.executeQuery("SELECT* FROM covid where State='Maharashtra'");
			while(rs.next())
			{
				int c=rs.getInt("Confirmed");
				int a=rs.getInt("Active");
				int r=rs.getInt("Recovered");
				int d=rs.getInt("Deceased");
				mci.setText(Integer.toString(c));
				mai.setText(Integer.toString(a));
				mri.setText(Integer.toString(r));
				mdi.setText(Integer.toString(d));
				
				
				
				System.out.println("Table created");
			}
			}
			catch(Exception e1)
			{
				e1.printStackTrace();
		
			
		});
			
		//For Gujurat
		
		Label gci=new Label();
		Label gai=new Label();
		Label gri=new Label();
		Label gdi=new Label();
		gci.setId("conf");
		gai.setId("act");
		gri.setId("rec");
		gdi.setId("dec");
		gridPane.add(gci,1,5);
		gridPane.add(gai,2,5);
		gridPane.add(gri,3,5);
		gridPane.add(gdi,4,5);
		guj.setOnAction(e->
		{
			try
			{
			
			Statement st=null;
			st=conn.createStatement();
			ResultSet rs=st.executeQuery("SELECT* FROM covid where State='Gujarat'");
			while(rs.next())
			{
				int c=rs.getInt("Confirmed");
				int a=rs.getInt("Active");
				int r=rs.getInt("Recovered");
				int d=rs.getInt("Deceased");
				gci.setText(Integer.toString(c));
				gai.setText(Integer.toString(a));
				gri.setText(Integer.toString(r));
				gdi.setText(Integer.toString(d));
				
				
				
				System.out.println("Table created");
			}
			}
			catch(Exception e1)
			{
				e1.printStackTrace();
			}
	
		});
		
		//For Delhi
		
		Label dci=new Label();
		Label dai=new Label();
		Label dri=new Label();
		Label ddi=new Label();
		dci.setId("conf");
		dai.setId("act");
		dri.setId("rec");
		ddi.setId("dec");
		gridPane.add(dci,1,6);
		gridPane.add(dai,2,6);
		gridPane.add(dri,3,6);
		gridPane.add(ddi,4,6);
		del.setOnAction(e->
		{
			try
			{
			
			Statement st=null;
			st=conn.createStatement();
			ResultSet rs=st.executeQuery("SELECT* FROM covid where State='Delhi'");
			while(rs.next())
			{
				int c=rs.getInt("Confirmed");
				int a=rs.getInt("Active");
				int r=rs.getInt("Recovered");
				int d=rs.getInt("Deceased");
				dci.setText(Integer.toString(c));
				dai.setText(Integer.toString(a));
				dri.setText(Integer.toString(r));
				ddi.setText(Integer.toString(d));
				
				
				
				System.out.println("Table created");
			}
			}
			catch(Exception e1)
			{
				e1.printStackTrace();
		
			
		});
		//for rajasthan
		
		Label rci=new Label();
		Label rai=new Label();
		Label rri=new Label();
		Label rdi=new Label();
		rci.setId("conf");
		rai.setId("act");
		rri.setId("rec");
		rdi.setId("dec");
		gridPane.add(rci,1,7);
		gridPane.add(rai,2,7);
		gridPane.add(rri,3,7);
		gridPane.add(rdi,4,7);
		raj.setOnAction(e->
		{
			try
			{
			
			Statement st=null;
			st=conn.createStatement();
			ResultSet rs=st.executeQuery("SELECT* FROM covid where State='Rajasthan'");
			while(rs.next())
			{
				int c=rs.getInt("Confirmed");
				int a=rs.getInt("Active");
				int r=rs.getInt("Recovered");
				int d=rs.getInt("Deceased");
				rci.setText(Integer.toString(c));
				rai.setText(Integer.toString(a));
				rri.setText(Integer.toString(r));
				rdi.setText(Integer.toString(d));
				
				
				
				System.out.println("Table created");
			}
			}
			catch(Exception e1)
			{
				e1.printStackTrace();
			}
	
		});
		
		
		
		
		//For MadhyaPradesh
		
		Label mpci=new Label();
		Label mpai=new Label();
		Label mpri=new Label();
		Label mpdi=new Label();
		mpci.setId("conf");
		mpai.setId("act");
		mpri.setId("rec");
		mpdi.setId("dec");
		gridPane.add(mpci,1,8);
		gridPane.add(mpai,2,8);
		gridPane.add(mpri,3,8);
		gridPane.add(mpdi,4,8);
		mp.setOnAction(e->
		{
			try
			{
			
			Statement st=null;
			st=conn.createStatement();
			ResultSet rs=st.executeQuery("SELECT* FROM covid where State='MadhyaPradesh'");
			while(rs.next())
			{
				int c=rs.getInt("Confirmed");
				int a=rs.getInt("Active");
				int r=rs.getInt("Recovered");
				int d=rs.getInt("Deceased");
				mpci.setText(Integer.toString(c));
				mpai.setText(Integer.toString(a));
				mpri.setText(Integer.toString(r));
				mpdi.setText(Integer.toString(d));
				
				
				
				System.out.println("Table created");
			}
			}
			catch(Exception e1)
			{
				e1.printStackTrace();
		
			
		});
		
		//Tamil NAdu 
		
		Label tci=new Label();
		Label tai=new Label();
		Label tri=new Label();
		Label tdi=new Label();
		tci.setId("conf");
		tai.setId("act");
		tri.setId("rec");
		tdi.setId("dec");
		gridPane.add(tci,1,9);
		gridPane.add(tai,2,9);
		gridPane.add(tri,3,9);
		gridPane.add(tdi,4,9);
		tn.setOnAction(e->
		{
			try
			{
			
			Statement st=null;
			st=conn.createStatement();
			ResultSet rs=st.executeQuery("SELECT* FROM covid where State='Tamil Nadu'");
			while(rs.next())
			{
				int c=rs.getInt("Confirmed");
				int a=rs.getInt("Active");
				int r=rs.getInt("Recovered");
				int d=rs.getInt("Deceased");
				tci.setText(Integer.toString(c));
				tai.setText(Integer.toString(a));
				tri.setText(Integer.toString(r));
				tdi.setText(Integer.toString(d));
				
				
				
				System.out.println("Table created");
			}
			}
			catch(Exception e1)
			{
				e1.printStackTrace();
			}
	
		});
		
		
		
		
		gridPane.add(maha,0,4);
		gridPane.add(guj,0,5);
		gridPane.add(del,0,6);
		gridPane.add(raj,0,7);
		gridPane.add(mp,0,8);
		gridPane.add(tn,0,9);
		
		
		
		
		
	}
	public static void main(String args[])
	{
		launch(args);
	}

}
