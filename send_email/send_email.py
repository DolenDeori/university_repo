from email import message
import smtplib , ssl

smtp_server = 'smtp.gmail.com'
port = 465
sender_eamil = 'deepakdeori54@gmail.com'
password = input("Enter your password : ")
receiver_email = 'dulench.deori564@gmail.com'
message = input("Enter your message : ")
contex = ssl.create_default_context()

with smtplib.SMTP_SSL(smtp_server, port, context=contex) as server:
    server.login(sender_eamil, password)
    server.sendmail(sender_eamil, receiver_email, message)