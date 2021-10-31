/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package question1;

import java.util.HashSet;
import java.util.Set;
import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Insets;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.CheckBox;
import javafx.scene.control.ComboBox;
import javafx.scene.control.Label;
import javafx.scene.control.RadioButton;
import javafx.scene.control.TextField;
import javafx.scene.control.ToggleGroup;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.HBox;
import javafx.stage.Stage;

/**
 *
 * @author aadhitya
 */
public class Question1 extends Application {
    
    @Override
    public void start(Stage primaryStage) {
        
        TextField nameInp = new TextField();
        TextField emailInp = new TextField();
        TextField phoneInp = new TextField();
        TextField passwordInp = new TextField();
        TextField confirmInp = new TextField();
        TextField aboutInp = new TextField("Your Personal Bio");
        aboutInp.setPrefHeight(70);
        
        
        Label name = new Label("Name :");
        Label email = new Label("Email :");
        Label phone = new Label("Phone :");
        Label password = new Label("Password :");
        Label confirm = new Label("Confirm :");
        Label country = new Label("Country :");
        Label gender = new Label("Gender :");
        Label language = new Label("Language :");
        Label about = new Label("About You :");
        
        ComboBox countryInp = new ComboBox();
        countryInp.getItems().addAll(
                "India", "US", "Africa", "Pakistan"
        );
        countryInp.setValue("Select");
        
        ToggleGroup genderGroup = new ToggleGroup();
        RadioButton male = new RadioButton("Male");
        male.setToggleGroup(genderGroup);
        RadioButton female = new RadioButton("Female");
        female.setToggleGroup(genderGroup);
        HBox genderBox = new HBox(10);
        genderBox.getChildren().addAll(male, female);
        
        CheckBox arabic = new CheckBox("Arabic");
        CheckBox english = new CheckBox("English");
        CheckBox spanish = new CheckBox("Spanish");
        HBox langBox = new HBox(10);
        langBox.getChildren().addAll(arabic, english, spanish);
        
        Button btn = new Button();
        btn.setMinWidth(350);
        btn.setText("Submit");
        btn.setOnAction(new EventHandler<ActionEvent>() {
            
            @Override
            public void handle(ActionEvent event) {
                System.out.println("Form Submitted !!");
                // Display successful message.
                
            }
        });
        
        GridPane root = new GridPane();
        
        root.setPadding(new Insets(20, 20, 20, 20)); 
        root.setVgap(10); 
        root.setHgap(10);
        
        root.add(name, 0, 0);
        root.add(nameInp, 1, 0);
        root.add(email, 0, 1);
        root.add(emailInp, 1, 1);
        root.add(phone, 0, 2);
        root.add(phoneInp, 1, 2);
        root.add(password, 0, 3);
        root.add(passwordInp, 1, 3);
        root.add(confirm, 0, 4);
        root.add(confirmInp, 1, 4);
        root.add(country, 0, 5);
        root.add(countryInp, 1, 5);
        root.add(gender, 0, 6);
        root.add(genderBox, 1, 6);
        root.add(language, 0, 7);
        root.add(langBox, 1, 7);
        root.add(about, 0, 8);
        root.add(aboutInp, 1, 8);
        root.add(btn, 0, 9, 2, 1);
        
        Scene scene = new Scene(root, 400, 500);
        
        primaryStage.setTitle("Registration Form");
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
