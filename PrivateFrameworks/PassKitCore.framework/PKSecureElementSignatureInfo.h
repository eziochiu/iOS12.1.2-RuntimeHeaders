/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSecureElementSignatureInfo : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _certificateVersion;
    PKSecureElementCertificateSet * _certificates;
    NSString * _platformIdentifier;
    NSString * _sequenceCounter;
}

@property (nonatomic, readonly) unsigned long long certificateVersion;
@property (nonatomic, readonly, copy) PKSecureElementCertificateSet *certificates;
@property (nonatomic, readonly, copy) NSString *platformIdentifier;
@property (nonatomic, readonly, copy) NSString *sequenceCounter;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)certificateVersion;
- (id)certificates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecureElementCertificateSet:(id)arg1 sequenceCounter:(id)arg2 platformIdentifier:(id)arg3 certificateVersion:(unsigned long long)arg4;
- (id)platformIdentifier;
- (id)sequenceCounter;

@end