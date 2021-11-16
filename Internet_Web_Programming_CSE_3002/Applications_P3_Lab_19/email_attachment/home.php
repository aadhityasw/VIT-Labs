<?php
    require(__DIR__ . './PHPMailer/src/PHPMailer.php');
    require(__DIR__ . './PHPMailer/src/Exception.php');
    
    //$mail = new PHPMailer(true);
    $mail = new PHPMailer\PHPMailer\PHPMailer();
    
    try {
        $mail->isSMTP();
        $mail->Host = 'smtp.mailgun.org';  //gmail SMTP server
        $mail->SMTPAuth = false;
        $mail->Username = '....mailgun.org';   //username
        $mail->Password = '...';   //password
        $mail->SMTPSecure = 'ssl';
        $mail->Port = 587;                    //smtp port
    
        $mail->setFrom('....mailgun.org', 'YOUR_NAME');
        $mail->addAddress('YOUR_EMAIL', 'YOUR_NAME');
    
        $mail->addAttachment(__DIR__ . '/files/f1.pdf');
        $mail->addAttachment(__DIR__ . '/files/f2.pdf');
    
        $mail->isHTML(true);
        $mail->Subject = 'My Email';
        $mail->Body    = '<b>Email Body</b>';
    
        $mail->send();
        echo 'Message has been sent';
    } catch (Exception $e) {
        echo 'Message could not be sent. Mailer Error: '. $mail->ErrorInfo;
    }
?>