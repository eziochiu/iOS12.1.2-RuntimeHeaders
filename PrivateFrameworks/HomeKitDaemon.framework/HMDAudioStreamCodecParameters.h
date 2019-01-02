/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAudioStreamCodecParameters : NSObject <NSCopying> {
    HMDAudioStreamBitRate * _bitRate;
    HMDAudioStreamNumAudioChannels * _numAudioChannels;
    HMDAudioStreamPacketTime * _packetTime;
    HMDAudioStreamSampleRate * _sampleRate;
}

@property (nonatomic, retain) HMDAudioStreamBitRate *bitRate;
@property (nonatomic, retain) HMDAudioStreamNumAudioChannels *numAudioChannels;
@property (nonatomic, retain) HMDAudioStreamPacketTime *packetTime;
@property (nonatomic, retain) HMDAudioStreamSampleRate *sampleRate;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)bitRate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithNumAudioChannels:(id)arg1 bitRate:(id)arg2 sampleRate:(id)arg3 packetTime:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)numAudioChannels;
- (id)packetTime;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)sampleRate;
- (id)serializeWithError:(id*)arg1;
- (void)setBitRate:(id)arg1;
- (void)setNumAudioChannels:(id)arg1;
- (void)setPacketTime:(id)arg1;
- (void)setSampleRate:(id)arg1;

@end