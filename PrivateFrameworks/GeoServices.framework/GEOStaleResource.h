/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStaleResource : PBCodable <NSCopying> {
    GEOResource * _desiredResource;
    GEOResource * _fallbackResource;
    struct { 
        unsigned int originalTimestamp : 1; 
    }  _has;
    double  _originalTimestamp;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOResource *desiredResource;
@property (nonatomic, retain) GEOResource *fallbackResource;
@property (nonatomic, readonly) bool hasDesiredResource;
@property (nonatomic, readonly) bool hasFallbackResource;
@property (nonatomic) bool hasOriginalTimestamp;
@property (nonatomic) double originalTimestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)desiredResource;
- (id)dictionaryRepresentation;
- (id)fallbackResource;
- (bool)hasDesiredResource;
- (bool)hasFallbackResource;
- (bool)hasOriginalTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)originalTimestamp;
- (bool)readFrom:(id)arg1;
- (void)setDesiredResource:(id)arg1;
- (void)setFallbackResource:(id)arg1;
- (void)setHasOriginalTimestamp:(bool)arg1;
- (void)setOriginalTimestamp:(double)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end