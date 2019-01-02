/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSiriActivationConnection : NSObject <AFInvalidating, AFSiriActivationService> {
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_invalidate;
- (oneway void)activateWithRequestInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (oneway void)handleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(id /* block */)arg3;
- (id)init;
- (void)invalidate;
- (oneway void)prewarmForRequestInfo:(id)arg1 completion:(id /* block */)arg2;

@end