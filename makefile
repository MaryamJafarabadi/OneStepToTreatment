all:OSTT.out
OSTT.out : main.o OneStepToTreatment.o Bankcard.o Bill.o ChoosePackageHandler.o ChooseSupporterHandler.o Document.o HCD_Service.o HospitalClinicDoctor.o LoginHandler.o Patient.o PatientService.o PayMoneyHandler.o Request.o SendInfoHandler.o SignupHandler.o Supporter.o SupporterService.o TreatmentPackageService.o TreatmentPackage.o TreatmentProcess.o
	g++ -g -std=c++11 main.o OneStepToTreatment.o Bankcard.o Bill.o ChoosePackageHandler.o ChooseSupporterHandler.o Document.o HCD_Service.o HospitalClinicDoctor.o LoginHandler.o Patient.o PatientService.o PayMoneyHandler.o Request.o SendInfoHandler.o SignupHandler.o Supporter.o SupporterService.o TreatmentPackageService.o TreatmentPackage.o TreatmentProcess.o -o OSTT.out

main.o : source/main.cpp include/OneStepToTreatment.hpp 
	g++ -g -std=c++11 -c main.cpp 

OneStepToTreatment.o : source/OneStepToTreatment.cpp include/OneStepToTreatment.hpp include/Patient.hpp include/SignupHandler.hpp include/PatientService.hpp include/LoginHandler.hpp include/ChoosePackageHandler.hpp include/TreatmentPackageService.hpp include/PayMoneyHandler.hpp include/ChooseSupporterHandler.hpp include/SupporterService.hpp include/SendInfoHandler.hpp include/HCD_Service.hpp
	g++ -g -std=c++11 -c source/OneStepToTreatment.cpp

Bankcard.o : source/Bankcard.cpp include/Bankcard.hpp
	g++ -g -std=c++11 -c source/Bankcard.cpp

Bill.o : source/Bill.cpp include/Bill.hpp
	g++ -g --std=c++11 -c source/Bill.cpp

ChoosePackageHandler.o : source/ChoosePackageHandler.cpp include/ChoosePackageHandler.hpp include/TreatmentPackageService.hpp include/Request.hpp include/Patient.hpp
	g++ -g --std=c++11 -c source/ChoosePackageHandler.cpp

ChooseSupporterHandler.o : source/ChooseSupporterHandler.cpp include/ChooseSupporterHandler.hpp include/SupporterService.hpp include/Request.hpp include/Patient.hpp
	g++ -g -std=c++11 -c source/ChooseSupporterHandler.cpp

Document.o : source/Document.cpp include/Document.hpp 
	g++ -g -std=c++11 -c source/Document.cpp 

HCD_Service.o : source/HCD_Service.cpp include/HCD_Service.hpp include/HospitalClinicDoctor.hpp include/Patient.hpp
	g++ -g -std=c++11 -c source/HCD_Service.cpp 

HospitalClinicDoctor.o : source/HospitalClinicDoctor.cpp include/HospitalClinicDoctor.hpp include/Patient.hpp
	g++ -g -std=c++11 -c source/HospitalClinicDoctor.cpp 

LoginHandler.o : source/LoginHandler.cpp include/LoginHandler.hpp include/PatientService.hpp
	g++ -g -std=c++11 -c source/LoginHandler.cpp 

Patient.o : source/Patient.cpp include/Patient.hpp include/Document.hpp include/Bill.hpp include/Bankcard.hpp include/Request.hpp include/Supporter.hpp
	g++ -g -std=c++11 -c source/Patient.cpp 

PatientService.o : source/PatientService.cpp include/PatientService.hpp include/Patient.hpp
	g++ -g -std=c++11 -c source/PatientService.cpp 

PayMoneyHandler.o : source/PayMoneyHandler.cpp include/PayMoneyHandler.hpp include/Request.hpp include/Patient.hpp
	g++ -g -std=c++11 -c source/PayMoneyHandler.cpp 

Request.o : source/Request.cpp include/Request.hpp include/TreatmentPackage.hpp
	g++ -g -std=c++11 -c source/Request.cpp 

SendInfoHandler.o : source/SendInfoHandler.cpp include/SendInfoHandler.hpp include/HCD_Service.hpp include/Patient.hpp include/Supporter.hpp
	g++ -g -std=c++11 -c source/SendInfoHandler.cpp 

SignupHandler.o : source/SignupHandler.cpp include/SignupHandler.hpp include/PatientService.hpp
	g++ -g -std=c++11 -c source/SignupHandler.cpp 

Supporter.o : source/Supporter.cpp include/Supporter.hpp
	g++ -g -std=c++11 -c source/Supporter.cpp 

SupporterService.o : source/SupporterService.cpp include/SupporterService.hpp include/Supporter.hpp
	g++ -g -std=c++11 -c source/SupporterService.cpp 

TreatmentPackageService.o : source/TreatmentPackageService.cpp include/TreatmentPackageService.hpp include/TreatmentPackage.hpp
	g++ -g -std=c++11 -c source/TreatmentPackageService.cpp 

TreatmentPackage.o : source/TreatmentPackage.cpp include/TreatmentPackage.hpp 
	g++ -g -std=c++11 -c source/TreatmentPackage.cpp 

TreatmentProcess.o : source/TreatmentProcess.cpp include/TreatmentProcess.hpp
	g++ -g -std=c++11 -c source/TreatmentProcess.cpp 

clean :
	rm *.o
	rm OSTT.out 
