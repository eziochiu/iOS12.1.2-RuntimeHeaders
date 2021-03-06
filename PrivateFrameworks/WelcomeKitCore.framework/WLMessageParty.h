/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLMessageParty : NSObject {
    NSString * _address;
    NSString * _ccAcNumber;
    NSString * _icc;
    bool  _isPhoneNumber;
    NSString * _np;
}

@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *ccAcNumber;
@property (nonatomic, readonly) NSString *icc;
@property (nonatomic, readonly) bool isPhoneNumber;
@property (nonatomic, readonly) NSString *np;

+ (id)_guessIccForNumber:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithAddress:(id)arg1 addCountryCode:(bool)arg2;
- (id)address;
- (id)ccAcNumber;
- (id)description;
- (id)icc;
- (bool)isPhoneNumber;
- (id)np;

@end
