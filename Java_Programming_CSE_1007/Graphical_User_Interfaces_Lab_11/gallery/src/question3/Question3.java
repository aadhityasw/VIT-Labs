/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package question3;

import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;

/**
 *
 * @author aadhitya
 */
public class Question3 extends Application {
    
    @Override
    public void start(Stage primaryStage) {
        
        Image img1 = new Image(Question3.class.getResourceAsStream("1.png"));
        Image img2 = new Image(Question3.class.getResourceAsStream("2.png"));
        Image img3 = new Image(Question3.class.getResourceAsStream("3.png"));
        Image img4 = new Image(Question3.class.getResourceAsStream("4.png"));
        
        ImageView iv1 = new ImageView(img1);
        iv1.setFitHeight(200);
        iv1.setFitWidth(200);
        ImageView iv2 = new ImageView(img2);
        iv2.setFitHeight(200);
        iv2.setFitWidth(200);
        ImageView iv3 = new ImageView(img3);
        iv3.setFitHeight(200);
        iv3.setFitWidth(200);
        ImageView iv4 = new ImageView(img4);
        iv4.setFitHeight(200);
        iv4.setFitWidth(200);
        
        
        GridPane root = new GridPane();
        root.add(iv1, 0, 0);
        root.add(iv2, 1, 0);
        root.add(iv3, 0, 1);
        root.add(iv4, 1, 1);
        
        Scene scene = new Scene(root, 400, 400);
        
        primaryStage.setTitle("Gallery");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        launch(args);
    }
    
}
