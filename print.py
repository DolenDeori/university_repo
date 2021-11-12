import ssl , smtplib

port = 465
sender_email = 'Sender_email'
password = 'my_password'
reciver_email = 'Receiver_email'
message = 'You have successfully sended this email through github workflow.'
contex = ssl.create_default_context()

with smtplib.SMTP_SSL('smtp.gmail.com' , port , context=contex) as server:
    server.login(sender_email , password=password)
    server.sendmail(sender_email , reciver_email , message)
    print('email send successfully')