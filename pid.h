#include<iostream>
using namespace std;
typedef struct {
    float setpoint;
    float kp, ki, kd;
    float prev_error;
    float integral;
    float prev_control;
} PIDController;

void PID_Init(PIDController* pid);    //��ʼ��PID�ṹ��
void PID_SetParameter(PIDController* pid, float kp, float ki, float kd);     //����PID����
float PID_PostionalPID(PIDController* pid, float pv);    //λ��ʽPIDʵ��
float PID_IncrementalPID(PIDController* pid, float pv);    //����ʽPIDʵ��#pragma once
