#include "mail_sender.cpp"

class TestableMailSender : public MailSender {
public:
	void sendMail(Schedule* schedule) override {
		constSendMailMethodIsCalled++;
	}

	int getCountSendMailMethodIsCalled(){
		return constSendMailMethodIsCalled;
	}

private:
	int constSendMailMethodIsCalled = 0;
};