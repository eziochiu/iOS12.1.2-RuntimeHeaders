/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTSerialTaskScheduler : NSObject <AVTTaskScheduler> {
    struct NSMutableArray { Class x1; } * _backlogTasks;
    long long  _order;
    struct NSMutableArray { Class x1; } * _priorityTasks;
    NSObject<OS_dispatch_queue> * _stateLock;
}

@property (nonatomic, readonly) NSMutableArray *backlogTasks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long order;
@property (nonatomic, readonly) NSMutableArray *priorityTasks;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateLock;
@property (readonly) Class superclass;

+ (id)fifoSchedulerWithEnvironment:(id)arg1;
+ (id)lifoSchedulerWithEnvironment:(id)arg1;
+ (id /* block */)nextTaskToRunForPriorityTasks:(struct NSMutableArray { Class x1; }*)arg1 backlogTasks:(struct NSMutableArray { Class x1; }*)arg2 order:(long long)arg3;

- (void).cxx_destruct;
- (struct NSMutableArray { Class x1; }*)backlogTasks;
- (void)cancelAllTasks;
- (void)cancelTask:(id /* block */)arg1;
- (void)didCompleteTask:(id /* block */)arg1;
- (id)initWithEnvironment:(id)arg1 order:(long long)arg2;
- (void)lowerTaskPriority:(id /* block */)arg1;
- (long long)order;
- (void)performStateWork:(id /* block */)arg1;
- (struct NSMutableArray { Class x1; }*)priorityTasks;
- (void)scheduleTask:(id /* block */)arg1;
- (void)startTask:(id /* block */)arg1;
- (id)stateLock;

@end