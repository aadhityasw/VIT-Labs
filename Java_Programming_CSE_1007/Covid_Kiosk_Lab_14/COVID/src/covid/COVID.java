/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package covid;

import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.stage.Stage;


import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.logging.Level;
import java.util.logging.Logger;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.Background;
import javafx.scene.layout.BackgroundFill;
import javafx.scene.layout.CornerRadii;
import javafx.scene.layout.HBox;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.scene.text.FontPosture;
import javafx.scene.text.FontWeight;
import javafx.scene.text.TextAlignment;
/**
 *
 * @author aadhitya
 */
public class COVID extends Application {
    
    public static final String USERNAME = "root";
    public static final String PASSWORD = "";
    public static final String CONN = "jdbc:mysql://localhost/java";
    
    @Override
    public void start(Stage primaryStage) throws SQLException {
        
        final Connection conn = DriverManager.getConnection(CONN, USERNAME, PASSWORD);
        System.out.println("SQL Connected");
        Statement smtp = null;
        String sql = "";
        smtp = conn.createStatement();
        
        final ImageView imgview = new ImageView();
        final Image image2 = new Image(COVID.class.getResourceAsStream("india.png"));
        //imgview.setFitHeight(60);
        
        
        Label title = new Label("COVID - 19 Portal");
        title.setFont(Font.font("Bradley Hand", FontWeight.BOLD, FontPosture.REGULAR, 50));
        title.setTextFill(Color.RED);
        
        Label contentHead = new Label("Welcome");
        contentHead.setFont(Font.font("Arial Black", FontWeight.BOLD, FontPosture.REGULAR, 40));
        contentHead.setTextFill(Color.BURLYWOOD);
        
        Label contentBodyDeath = new Label();
        contentBodyDeath.setStyle("-fx-font-family: \"Comic Sans MS\"; -fx-font-size: 20; -fx-text-fill: darkred;");
        
        Label contentBodyTotal = new Label();
        contentBodyTotal.setStyle("-fx-font-family: \"Comic Sans MS\"; -fx-font-size: 20; -fx-text-fill: darkred;");
        
        Label contentBodyCured = new Label();
        contentBodyCured.setStyle("-fx-font-family: \"Comic Sans MS\"; -fx-font-size: 20; -fx-text-fill: darkred;");
        
        
        Button India = new Button();
        India.setText("India");
        India.setFont(Font.font("American Typewriter", FontWeight.BOLD, FontPosture.REGULAR, 30));
        India.setPrefWidth(300);
        India.setAlignment(Pos.CENTER);
        India.setOnAction(new EventHandler<ActionEvent>() {
            
            @Override
            public void handle(ActionEvent event) {
                String sql = "SELECT total, cured, deaths FROM covid WHERE state='India';";
                try {
                    Statement smtp = conn.createStatement();
                    ResultSet res = smtp.executeQuery(sql);
                    res.next();
                    System.out.println("India : " + res.getInt("total") + res.getInt("cured") + res.getInt("deaths"));
                    contentHead.setText("All India Figures");
                    contentBodyTotal.setText("Total Cases : " + res.getInt("total"));
                    contentBodyCured.setText("Cured Cases : " + res.getInt("cured"));
                    contentBodyDeath.setText("Deaths : " + res.getInt("deaths"));
                    imgview.setImage(image2);
                    
                } catch (SQLException ex) {
                    Logger.getLogger(COVID.class.getName()).log(Level.SEVERE, null, ex);
                }
                System.out.println("India calls");
            }
        });
        
        Button Tamil_Nadu = new Button();
        Tamil_Nadu.setText("Tamil Nadu");
        Tamil_Nadu.setFont(Font.font("American Typewriter", FontWeight.BOLD, FontPosture.REGULAR, 30));
        Tamil_Nadu.setPrefWidth(300);
        Tamil_Nadu.setAlignment(Pos.CENTER);
        Tamil_Nadu.setOnAction(new EventHandler<ActionEvent>() {
            
            @Override
            public void handle(ActionEvent event) {
                String sql = "SELECT total, cured, deaths FROM covid WHERE state='Tamil Nadu';";
                try {
                    Statement smtp = conn.createStatement();
                    ResultSet res = smtp.executeQuery(sql);
                    res.next();
                    System.out.println("Tamil Nadu : " + res.getInt("total") + res.getInt("cured") + res.getInt("deaths"));
                    contentHead.setText("Tamil Nadu Figures");
                    contentBodyTotal.setText("Total Cases : " + res.getInt("total"));
                    contentBodyCured.setText("Cured Cases : " + res.getInt("cured"));
                    contentBodyDeath.setText("Deaths : " + res.getInt("deaths"));
                    imgview.setImage(null);
                } catch (SQLException ex) {
                    Logger.getLogger(COVID.class.getName()).log(Level.SEVERE, null, ex);
                }
                System.out.println("Tamil Nadu calls");
            }
        });
        
        Button Karnataka = new Button();
        Karnataka.setText("Karnataka");
        Karnataka.setFont(Font.font("American Typewriter", FontWeight.BOLD, FontPosture.REGULAR, 30));
        Karnataka.setPrefWidth(300);
        Karnataka.setAlignment(Pos.CENTER);
        Karnataka.setOnAction(new EventHandler<ActionEvent>() {
            
            @Override
            public void handle(ActionEvent event) {
                String sql = "SELECT total, cured, deaths FROM covid WHERE state='Karnataka';";
                try {
                    Statement smtp = conn.createStatement();
                    ResultSet res = smtp.executeQuery(sql);
                    res.next();
                    System.out.println("Karnataka : " + res.getInt("total") + res.getInt("cured") + res.getInt("deaths"));
                    contentHead.setText("Karnataka Figures");
                    contentBodyTotal.setText("Total Cases : " + res.getInt("total"));
                    contentBodyCured.setText("Cured Cases : " + res.getInt("cured"));
                    contentBodyDeath.setText("Deaths : " + res.getInt("deaths"));
                    imgview.setImage(null);
                } catch (SQLException ex) {
                    Logger.getLogger(COVID.class.getName()).log(Level.SEVERE, null, ex);
                }
                System.out.println("Karnataka calls");
            }
        });
        
        Button Kerla = new Button();
        Kerla.setText("Kerla");
        Kerla.setFont(Font.font("American Typewriter", FontWeight.BOLD, FontPosture.REGULAR, 30));
        Kerla.setPrefWidth(300);
        Kerla.setAlignment(Pos.CENTER);
        Kerla.setOnAction(new EventHandler<ActionEvent>() {
            
            @Override
            public void handle(ActionEvent event) {
                String sql = "SELECT total, cured, deaths FROM covid WHERE state='Kerla';";
                try {
                    Statement smtp = conn.createStatement();
                    ResultSet res = smtp.executeQuery(sql);
                    res.next();
                    System.out.println("Kerla : " + res.getInt("total") + res.getInt("cured") + res.getInt("deaths"));
                    contentHead.setText("Kerla Figures");
                    contentBodyTotal.setText("Total Cases : " + res.getInt("total"));
                    contentBodyCured.setText("Cured Cases : " + res.getInt("cured"));
                    contentBodyDeath.setText("Deaths : " + res.getInt("deaths"));
                    imgview.setImage(null);
                } catch (SQLException ex) {
                    Logger.getLogger(COVID.class.getName()).log(Level.SEVERE, null, ex);
                }
                System.out.println("Kerla calls");
            }
        });
        
        Button Telangana = new Button();
        Telangana.setText("Telangana");
        Telangana.setFont(Font.font("American Typewriter", FontWeight.BOLD, FontPosture.REGULAR, 30));
        Telangana.setPrefWidth(300);
        Telangana.setAlignment(Pos.CENTER);
        Telangana.setOnAction(new EventHandler<ActionEvent>() {
            
            @Override
            public void handle(ActionEvent event) {
                String sql = "SELECT total, cured, deaths FROM covid WHERE state='Telangana';";
                try {
                    Statement smtp = conn.createStatement();
                    ResultSet res = smtp.executeQuery(sql);
                    res.next();
                    System.out.println("Telangana : " + res.getInt("total") + res.getInt("cured") + res.getInt("deaths"));
                    contentHead.setText("Telangana Figures");
                    contentBodyTotal.setText("Total Cases : " + res.getInt("total"));
                    contentBodyCured.setText("Cured Cases : " + res.getInt("cured"));
                    contentBodyDeath.setText("Deaths : " + res.getInt("deaths"));
                    imgview.setImage(null);
                } catch (SQLException ex) {
                    Logger.getLogger(COVID.class.getName()).log(Level.SEVERE, null, ex);
                }
                System.out.println("Telangana calls");
            }
        });
        
        VBox optionList = new VBox(20, India, Tamil_Nadu, Kerla, Karnataka, Telangana);
        optionList.setAlignment(Pos.BASELINE_CENTER);
        optionList.prefWidthProperty().bind(primaryStage.widthProperty().multiply(0.30));
        BackgroundFill background_fill_option_list = new BackgroundFill(Color.BEIGE, CornerRadii.EMPTY, Insets.EMPTY); 
        Background background_option_list_box = new Background(background_fill_option_list); 
        optionList.setBackground(background_option_list_box);
        
        VBox mainContent = new VBox(40, contentHead, contentBodyTotal, contentBodyCured, contentBodyDeath, imgview);
        mainContent.prefWidthProperty().bind(primaryStage.widthProperty().multiply(0.70));
        mainContent.setAlignment(Pos.BASELINE_CENTER);
        mainContent.setPrefHeight(750);
        BackgroundFill background_fill_main_content = new BackgroundFill(Color.CORNSILK, CornerRadii.EMPTY, Insets.EMPTY); 
        Background background_main_content = new Background(background_fill_main_content); 
        mainContent.setBackground(background_main_content); 
        
        HBox titleHbox = new HBox(title);
        titleHbox.setAlignment(Pos.TOP_CENTER);
        titleHbox.prefWidthProperty().bind(primaryStage.widthProperty().multiply(1));
        HBox.setMargin(title, new Insets(10, 10, 10, 10));
        BackgroundFill background_fill_title_box = new BackgroundFill(Color.IVORY, CornerRadii.EMPTY, Insets.EMPTY); 
        Background background_title_box = new Background(background_fill_title_box); 
        titleHbox.setBackground(background_title_box); 
        
        HBox bodyHbox = new HBox(optionList, mainContent);
        
        VBox root = new VBox();
        root.getChildren().addAll(titleHbox, bodyHbox);
        
        Scene scene = new Scene(root, 1200, 800);
        
        primaryStage.setTitle("COVID - 19");
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    /**
     * @param args the command line arguments
     * @throws java.sql.SQLException
     */
    
    public static void main(String[] args) {
        launch(args);
        
        // System.out.println(javafx.scene.text.Font.getFamilies());
    }
    
}
