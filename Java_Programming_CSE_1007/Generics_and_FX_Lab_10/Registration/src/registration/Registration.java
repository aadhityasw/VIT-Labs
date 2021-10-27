/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package registration;

import java.io.FileInputStream;
import javafx.application.Application;
import javafx.collections.FXCollections;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.ComboBox;
import javafx.scene.control.Label;
import javafx.scene.control.Separator;
import javafx.scene.control.TextField;
import javafx.scene.image.ImageView;
import javafx.scene.layout.FlowPane;
import javafx.scene.layout.HBox;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;
import javafx.scene.layout.VBox;
import javafx.scene.text.Font;
import javafx.scene.text.FontPosture;
import javafx.scene.text.FontWeight;
import javafx.scene.image.Image;
import java.io.*;


/**
 *
 * @author student
 */
public class Registration extends Application {
    
    @Override
    public void start(Stage primaryStage) {
        
        final ImageView imgview = new ImageView();
        final Image image2 = new Image(Registration.class.getResourceAsStream("image.png"));
        imgview.setImage(image2);
        imgview.setFitHeight(60);
        HBox hbox9 = new HBox();
        hbox9.getChildren().addAll(imgview);
        hbox9.setMaxHeight(60.0);
        
        Label title = new Label("College Application");
        title.setFont(Font.font("arial", FontWeight.BOLD, FontPosture.REGULAR, 20));
        
        Separator separator = new Separator();
        separator.setMaxWidth(400);
        
        Button btn = new Button("Submit");
        btn.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                System.out.println("Form has been submitted!!");
            }
        });
        
        Label name = new Label("Name *");
        name.setFont(Font.font("arial", FontWeight.BOLD, FontPosture.REGULAR, 15 ));
        Label fname = new Label("First");
        Label lname = new Label("Last");
        TextField fna = new TextField();
        TextField lna = new TextField();
        HBox hbox1 = new HBox();
        HBox hbox2 = new HBox();
        hbox1.getChildren().addAll(fna, lna);
        hbox1.setSpacing(10);
        hbox2.getChildren().addAll(fname, lname);
        hbox2.setSpacing(150);
        
        Label address = new Label("Address *");
        address.setFont(Font.font("arial", FontWeight.BOLD, FontPosture.REGULAR, 15 ));
        TextField straddrinp = new TextField();
        straddrinp.setMaxWidth(500);
        Label straddr = new Label("Street Address");
        TextField addrln2inp = new TextField();
        addrln2inp.setMaxWidth(500);
        Label addrln2 = new Label("Address line 2");
        TextField cityinp = new TextField();
        TextField stateinp = new TextField();
        HBox hbox3 = new HBox();
        hbox3.getChildren().addAll(cityinp, stateinp);
        hbox3.setSpacing(10);
        Label city = new Label("City");
        Label state = new Label("State  /  Province  /  Region");
        HBox hbox4 = new HBox();
        hbox4.getChildren().addAll(city, state);
        hbox4.setSpacing(130);
        TextField postalinp = new TextField();
        String countries_list[] = { "India", "Pakistan", "Afganistan", "Sri Lanka" };
        ComboBox countryinp = new ComboBox(FXCollections.observableArrayList(countries_list));
        HBox hbox5 = new HBox();
        hbox5.getChildren().addAll(postalinp, countryinp);
        hbox5.setSpacing(10);
        Label postal = new Label("Postal  /  Zip Code");
        Label country = new Label("Country");
        HBox hbox6 = new HBox();
        hbox6.getChildren().addAll(postal, country);
        hbox6.setSpacing(70);
        
        Label phone = new Label("Phone *");
        phone.setFont(Font.font("arial", FontWeight.BOLD, FontPosture.REGULAR, 15 ));
        TextField p1 = new TextField();
        TextField p2 = new TextField();
        TextField p3 = new TextField();
        p1.setMaxWidth(50);
        p2.setMaxWidth(50);
        p3.setMaxWidth(50);
        Label dash = new Label("-");
        Label dash1 = new Label("-");
        HBox hbox7 = new HBox();
        hbox7.getChildren().addAll(p1, dash, p2, dash1, p3);
        hbox7.setSpacing(30);
        Label h1 = new Label("###");
        Label h2 = new Label("###");
        Label h3 = new Label("####");
        HBox hbox8 = new HBox();
        hbox8.getChildren().addAll(h1, h2, h3);
        hbox8.setSpacing(100);
        
        VBox root = new VBox();
        //FlowPane root = new FlowPane();
        root.getChildren().addAll(hbox9, title, separator, name, hbox1, hbox2, address, straddrinp, straddr, addrln2inp, addrln2, hbox3, hbox4, hbox5, hbox6, phone, hbox7, hbox8, btn);
        root.setSpacing(10);
        
        Scene scene = new Scene(root, 700, 700);
        
        primaryStage.setTitle("Hello World!");
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
