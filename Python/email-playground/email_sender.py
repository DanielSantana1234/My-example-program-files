import smtplib
from email.message import EmailMessage
from string import Template
from pathlib import Path # similar to os.path

html = Template(Path('index.html').read_text())
email = EmailMessage()
email['from'] = 'Daniel Santana'
email['to'] = 'kylee123121@gmail.com'
email['subject'] = 'My first email in Python dedicated to my love! <3'

email.set_content(html.substitute(name='Daniel'), 'html')
# or 
# email.set_content(html.substitute({'name':'Daniel'}))
# email.set_content('I love you so so so so so much my Bubu baby love Kylee honey baby sweetie!!!!!')

with smtplib.SMTP(host='smtp.gmail.com', port=587) as smtp:
    smtp.ehlo() # Server hello awake message
    smtp.starttls() # Conmnect securely to the server
    smtp.login('chickenlurch@gmail.com', 'qhej xpih fdia vhhx')
    smtp.send_message(email)
    print("All good baby!")