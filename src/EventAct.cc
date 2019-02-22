#include <EventAct.hh>

// ���������� ������� �� ������ Event - �� ������ ������� ������� �� �� ����������

EventAct::EventAct() {
	//OutFile::Info("\"EventAct.cc\" works");
}
EventAct::~EventAct() {}

int SLcounter=0;

void EventAct::StepLengthCounter(G4double count1) { //�������� ������� ������ �������� �� ����
	SLcounter ++;
	G4cout << "Step N= " << SLcounter << "\t, Length=" << count1 << G4endl; //debug-����.
};

void EventAct::BeginOfEventAction(const G4Event * EVE) {
	//G4cout << "BeginWorks\t" << EVE->GetEventID() << G4endl;
	SLcounter = 0; //��������� �������� ������ ��� ��� ������� ���������� �������
};

void EventAct::EndOfEventAction(const G4Event *EVE) {
		
};