from email import message
import smtplib , ssl

smtp_server = 'smtp.gmail.com'
port = 465
sender_eamil = 'deepakdeori54@gmail.com'
password = 'DEEPAKC@D{RB@}69'
receiver_email = 'dulench.deori564@gmail.com'
message = "Your workflow test is successful and this email is sended from there."
contex = ssl.create_default_context()

with smtplib.SMTP_SSL(smtp_server, port, context=contex) as server:
    server.login(sender_eamil, password)
    server.sendmail(sender_eamil, receiver_email, message)