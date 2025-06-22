from twilio.rest import Client

account_sid = 'AC8af48b66a549fd464f0a335d94e5858b'
auth_token = 'ad3f25a41bf3078d6bba0613e22bd5dc'
client = Client(account_sid, auth_token)

message = client.messages.create(
  from_='+18556853190',
  body='I see you Kylee',
  to='+14783082071'
)

print(message.sid)

