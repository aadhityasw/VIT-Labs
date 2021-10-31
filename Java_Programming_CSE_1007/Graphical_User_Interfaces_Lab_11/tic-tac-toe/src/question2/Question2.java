/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package question2;

import javafx.application.Application;
import java.io.FileInputStream;
import javafx.collections.FXCollections;
import java.io.*;
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
public class Question2 extends Application {
    
    static int player = 1;
    
    @Override
    public void start(Stage primaryStage) throws FileNotFoundException {
        
        int i, j;
        int BOARD_SIZE = 3;
        
        final Image x = new Image(Question2.class.getResourceAsStream("x.png"));
        final Image o = new Image(Question2.class.getResourceAsStream("o.png"));
        
        int board_num[][] = new int[BOARD_SIZE][BOARD_SIZE];
        for(i=0;i<BOARD_SIZE;i++)
        {
            for(j=0;j<BOARD_SIZE;j++)
            {
                board_num[i][j] = -1;
            }
        }
        
        Button board[][] = new Button[BOARD_SIZE][BOARD_SIZE];
        // Setting the size for the buttons.
        for(i=0;i<BOARD_SIZE;i++)
        {
            for(j=0;j<BOARD_SIZE;j++)
            {
                board[i][j] = new Button();
                board[i][j].setPrefSize(100, 100);
            }
        }
        
        // Adding clicking functions for the buttons.
        for(i=0;i<BOARD_SIZE;i++)
        {
            for(j=0;j<BOARD_SIZE;j++)
            {
                if(board_num[i][j] == -1)
                {
                    final int x_pos = i, y_pos = j;
                    final Button btn = board[i][j];
                    board[i][j].setOnAction(new EventHandler<ActionEvent>() {
                        @Override
                        public void handle(ActionEvent event) {
                            System.out.println("Clicked board position : " + x_pos + ", " + y_pos);
                            if(Question2.player == 0)
                            {
                                ImageView iv = new ImageView(o);
                                iv.setFitHeight(80);
                                iv.setFitWidth(80);
                                btn.setGraphic(iv);
                            }
                            else
                            {
                                ImageView iv = new ImageView(x);
                                iv.setFitHeight(80);
                                iv.setFitWidth(80);
                                btn.setGraphic(iv);
                            }
                            Question2.player = (Question2.player + 1) % 2;
                        }
                    });
                }
            }
        }
        
        GridPane root = new GridPane();
        for(i=0;i<3 ; i++)
        {
            for(j=0;j<3;j++)
            {
                root.add(board[i][j], j, i);
            }
        }
        
        Scene scene = new Scene(root, 300, 300);
        
        primaryStage.setTitle("Tic Tac Toe");
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
