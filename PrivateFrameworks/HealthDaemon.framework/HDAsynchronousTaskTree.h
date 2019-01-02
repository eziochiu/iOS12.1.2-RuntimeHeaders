/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAsynchronousTaskTree : NSObject {
    int  _canceled;
    NSObject<OS_dispatch_queue> * _default_task_queue;
    NSString * _groupDescription;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _queue_completion;
    bool  _queue_finished;
    NSMutableArray * _queue_pendingSubtasks;
    NSMutableArray * _queue_pendingTasks;
    bool  _queue_started;
    NSMutableArray * _queue_taskErrors;
    bool  _rejectAddTask;
}

@property (nonatomic, readonly) NSArray *allErrors;
@property (nonatomic, readonly, copy) NSString *groupDescription;

- (void).cxx_destruct;
- (void)_queue_beginNextTask;
- (void)_queue_completeCurrentTaskWithResult:(long long)arg1 error:(id)arg2;
- (void)_queue_insertPendingSubtasks;
- (void)_queue_reportResult:(long long)arg1;
- (void)_queue_runPendingCheckpointTasks:(id)arg1 completion:(id /* block */)arg2;
- (void)addCheckpointTask:(id /* block */)arg1;
- (void)addTask:(id /* block */)arg1;
- (void)addTaskOnQueue:(id)arg1 task:(id /* block */)arg2;
- (void)addTaskOnQueue:(id)arg1 timeout:(double)arg2 task:(id /* block */)arg3;
- (void)addTaskWithTimeout:(double)arg1 task:(id /* block */)arg2;
- (id)allErrors;
- (void)begin;
- (void)cancel;
- (id)description;
- (id)groupDescription;
- (id)initWithDescription:(id)arg1 completion:(id /* block */)arg2;

@end