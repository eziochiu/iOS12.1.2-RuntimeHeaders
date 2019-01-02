/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADEventTimeWindowPredicate : CADPredicate <EKDefaultPropertiesLoading, EKPredicateEvaluating, NSSecureCoding> {
    NSDate * _endDate;
    bool  _mustStartInInterval;
    NSDate * _startDate;
    CADPredicate * _wrappedPredicate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool mustStartInInterval;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CADPredicate *wrappedPredicate;

// Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; struct __CFDictionary {} *x6; struct __CFDictionary {} *x7; struct _opaque_pthread_mutex_t { long long x_8_1_1; BOOL x_8_1_2[56]; } x8; unsigned int x9; unsigned int x10; struct __CFArray {} *x11; struct __CFString {} *x12; struct __CFArray {} *x13; int x14; int x15; struct __CFString {} *x16; struct __CFString {} *x17; struct __CFString {} *x18; int x19; id /* block */ x20; struct _opaque_pthread_mutex_t { long long x_21_1_1; BOOL x_21_1_2[56]; } x21; bool x22; struct __CFArray {} *x23; struct __CFArray {} *x24; struct __CFArray {} *x25; struct __CFArray {} *x26; bool x27; id x28; }*)arg1;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1 limitWithStartDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(bool)arg4;
- (bool)mustStartInInterval;
- (id)predicateFormat;
- (bool)shouldLoadDefaultProperties;
- (id)startDate;
- (id)wrappedPredicate;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (bool)ekPredicateEvaluateWithObject:(id)arg1;

@end