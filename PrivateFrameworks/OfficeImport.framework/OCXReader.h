/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCXReader : OCDEncryptedReader {
    const void * mDataBytes;
    OCPZipPackage * mZipPackage;
}

@property (nonatomic, retain) OCPZipPackage *zipPackage;

- (void)dealloc;
- (bool)isBinaryReader;
- (id)read;
- (void)restartReaderToUseDecryptedDocument;
- (bool)retainDecryptorWithErrorCode:(int*)arg1;
- (void)setZipPackage:(id)arg1;
- (bool)start;
- (bool)verifyFileFormat;
- (id)zipPackage;

@end
