/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGJournal : NSObject {
    NSMutableArray * _calendarObservers;
    NSMutableArray * _contactsObservers;
    bool  _observersFrozen;
    NSMutableArray * _queuedOperations;
}

- (void).cxx_destruct;
- (void)_callCalendarObservers:(id)arg1 contactsObservers:(id)arg2 withEntry:(id)arg3;
- (unsigned long long)_eventBatchOperationSupportedForEntries:(id)arg1;
- (void)addCalendarObserver:(id)arg1;
- (void)addContactsObserver:(id)arg1;
- (void)addEntries:(id)arg1;
- (void)addEntry:(id)arg1;
- (void)freezeObservers;
- (bool)hasObserver:(id)arg1;
- (id)init;
- (void)thawObserversForTesting;

@end