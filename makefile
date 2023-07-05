all:OSTT.out
OSTT.out : main.o OneStepToTreatment.o Bankcard.o Bill.o ChoosePackageHandler.o ChooseSupporterHandler.o Document.o HCD_Service.o HospitalClinicDoctor.o LoginHandler.o Patient.o PatientService.o PayMoneyHandler.o Request.o SendInfoHandler.o SignupHandler.o Supporter.o SupporterService.o TreatmentPackageService.o TreatmentPackage.o TreatmentProcess.o
	g++ -g -std=c++11 main.o OneStepToTreatment.o Bankcard.o Bill.o ChoosePackageHandler.o ChooseSupporterHandler.o Document.o HCD_Service.o HospitalClinicDoctor.o LoginHandler.o Patient.o PatientService.o PayMoneyHandler.o Request.o SendInfoHandler.o SignupHandler.o Supporter.o SupporterService.o TreatmentPackageService.o TreatmentPackage.o TreatmentProcess.o -o OSTT.out

main.o : main.cpp OneStepToTreatment.hpp 
	g++ -g -std=c++11 -c main.cpp 

OneStepToTreatment.o : OneStepToTreatment.cpp OneStepToTreatment.hpp Patient.hpp SignupHandler.hpp PatientService.hpp LoginHandler.hpp ChoosePackageHandler.hpp TreatmentPackageService.hpp PayMoneyHandler.hpp ChooseSupporterHandler.hpp SupporterService.hpp SendInfoHandler.hpp HCD_Service.hpp
	g++ -g -std=c++11 -c OneStepToTreatment.cpp

Bankcard.o : Bankcard.cpp Bankcard.hpp
	g++ -g -std=c++11 -c Bankcard.cpp

Bill.o : Bill.cpp Bill.hpp
	g++ -g --std=c++11 -c Bill.cpp

ChoosePackageHandler.o : ChoosePackageHandler.cpp ChoosePackageHandler.hpp TreatmentPackageService.hpp Request.hpp Patient.hpp
	g++ -g --std=c++11 -c ChoosePackageHandler.cpp

ChooseSupporterHandler.o : ChooseSupporterHandler.cpp ChooseSupporterHandler.hpp SupporterService.hpp Request.hpp Patient.hpp
	g++ -g -std=c++11 -c ChooseSupporterHandler.cpp

Document.o : Document.cpp Document.hpp 
	g++ -g -std=c++11 -c Document.cpp 

HCD_Service.o : HCD_Service.cpp HCD_Service.hpp HospitalClinicDoctor.hpp Patient.hpp
	g++ -g -std=c++11 -c HCD_Service.cpp 

HospitalClinicDoctor.o : HospitalClinicDoctor.cpp HospitalClinicDoctor.hpp Patient.hpp
	g++ -g -std=c++11 -c HospitalClinicDoctor.cpp 

LoginHandler.o : LoginHandler.cpp LoginHandler.hpp PatientService.hpp
	g++ -g -std=c++11 -c LoginHandler.cpp 

Patient.o : Patient.cpp Patient.hpp Document.hpp Bill.hpp Bankcard.hpp Request.hpp Supporter.hpp
	g++ -g -std=c++11 -c Patient.cpp 

PatientService.o : PatientService.cpp PatientService.hpp Patient.hpp
	g++ -g -std=c++11 -c PatientService.cpp 

PayMoneyHandler.o : PayMoneyHandler.cpp PayMoneyHandler.hpp Request.hpp Patient.hpp
	g++ -g -std=c++11 -c PayMoneyHandler.cpp 

Request.o : Request.cpp Request.hpp TreatmentPackage.hpp
	g++ -g -std=c++11 -c Request.cpp 

SendInfoHandler.o : SendInfoHandler.cpp SendInfoHandler.hpp HCD_Service.hpp Patient.hpp Supporter.hpp
	g++ -g -std=c++11 -c SendInfoHandler.cpp 

SignupHandler.o : SignupHandler.cpp SignupHandler.hpp PatientService.hpp
	g++ -g -std=c++11 -c SignupHandler.cpp 

Supporter.o : Supporter.cpp Supporter.hpp
	g++ -g -std=c++11 -c Supporter.cpp 

SupporterService.o : SupporterService.cpp SupporterService.hpp Supporter.hpp
	g++ -g -std=c++11 -c SupporterService.cpp 

TreatmentPackageService.o : TreatmentPackageService.cpp TreatmentPackageService.hpp TreatmentPackage.hpp
	g++ -g -std=c++11 -c TreatmentPackageService.cpp 

TreatmentPackage.o : TreatmentPackage.cpp TreatmentPackage.hpp 
	g++ -g -std=c++11 -c TreatmentPackage.cpp 

TreatmentProcess.o : TreatmentProcess.cpp TreatmentProcess.hpp
	g++ -g -std=c++11 -c TreatmentProcess.cpp 

clean :
	rm *.o
	rm OSTT.out 