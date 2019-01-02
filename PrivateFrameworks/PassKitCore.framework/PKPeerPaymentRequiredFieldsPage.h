/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentRequiredFieldsPage : NSObject {
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    NSArray * _requiredFields;
}

@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, retain) NSArray *requiredFields;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 fieldOptions:(id)arg2;
- (id)localizedDescription;
- (id)localizedTitle;
- (id)requiredFields;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setRequiredFields:(id)arg1;

@end