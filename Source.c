#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double Finalcalc(double current_grade, double weight_of_final, double desired_grade,double *exam_grade);

int main () {

	double current_grade, weight_of_final, desired_grade, max_grade, exam_grade;

	printf("Enter current grade: ");
	scanf("%lf", &current_grade);

	printf("Enter weight of final exam: ");
	scanf("%lf", &weight_of_final);

	printf("Enter desired grade: ");
	scanf("%lf", &desired_grade);

	max_grade = Finalcalc(current_grade, weight_of_final, desired_grade, &exam_grade);
	
	if (exam_grade<100)
		printf("Exam grade needed is %.2f percent\n", exam_grade);
	else
		printf("Grade is not possible to achieve. Max grade is %.2f\n",max_grade);

	system("pause");
	return 0;
}

double Finalcalc(double current_grade, double weight_of_final, double desired_grade,double *exam_grade) {
	double exam_final_weight,max_grade;
	exam_final_weight = desired_grade - current_grade * ((100- weight_of_final) / 100);
	*exam_grade = (exam_final_weight/(weight_of_final / 100));

	if (exam_grade > 100) {
		max_grade = current_grade * ((100 - weight_of_final) / 100) + weight_of_final;
		return max_grade;
	}
	else
		return 0;
}