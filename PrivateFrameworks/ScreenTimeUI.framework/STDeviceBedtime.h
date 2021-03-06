/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STDeviceBedtime : NSObject <NSCopying, NSSecureCoding> {
    bool  _askForMoreTime;
    bool  _deviceBedtimeEnabled;
    NSDateComponents * _end;
    NSDateComponents * _start;
}

@property (nonatomic) bool askForMoreTime;
@property (nonatomic) bool deviceBedtimeEnabled;
@property (nonatomic, copy) NSDateComponents *end;
@property (nonatomic, copy) NSDateComponents *start;

+ (id)defaultBedtimeEnd;
+ (id)defaultBedtimeStart;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_stDeviceBedtimeInitByParsingFamilyBedtimeAllPredicate:(id)arg1;
- (void)_stDeviceBedtimeInitByParsingPersonalBedtimePredicate:(id)arg1;
- (bool)askForMoreTime;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deviceBedtimeEnabled;
- (void)encodeWithCoder:(id)arg1;
- (id)end;
- (id)init;
- (id)initWithActivation:(id)arg1;
- (id)initWithBlueprint:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAskForMoreTime:(bool)arg1;
- (void)setDeviceBedtimeEnabled:(bool)arg1;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;

@end
