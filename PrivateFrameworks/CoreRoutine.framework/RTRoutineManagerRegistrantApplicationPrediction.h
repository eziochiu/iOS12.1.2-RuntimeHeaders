/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTRoutineManagerRegistrantApplicationPrediction : RTRoutineManagerRegistrant {
    NSPredicate * _applicationMonitoringPredicate;
    id /* block */  _predictedApplicationHandler;
    bool  _registered;
}

@property (nonatomic, retain) NSPredicate *applicationMonitoringPredicate;
@property (nonatomic, copy) id /* block */ predictedApplicationHandler;
@property (nonatomic) bool registered;

- (void).cxx_destruct;
- (id)applicationMonitoringPredicate;
- (void)onPredictedApplications:(id)arg1 error:(id)arg2;
- (id /* block */)predictedApplicationHandler;
- (bool)registered;
- (void)setApplicationMonitoringPredicate:(id)arg1;
- (void)setPredictedApplicationHandler:(id /* block */)arg1;
- (void)setRegistered:(bool)arg1;
- (id)startMonitoringForPredictedApplicationsUsingPredicate:(id)arg1 handler:(id /* block */)arg2;
- (id)stopMonitoringForPredictedApplications;

@end