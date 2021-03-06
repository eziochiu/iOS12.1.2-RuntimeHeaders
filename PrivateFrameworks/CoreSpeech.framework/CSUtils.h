/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSUtils : NSObject

+ (void)URLsInDirectory:(id)arg1 matchingPattern:(id)arg2 completion:(id /* block */)arg3;
+ (id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 includingPropertiesForKeys:(id)arg3 error:(id*)arg4;
+ (void)_sortedURLsInDirectory:(id)arg1 matchingPattern:(id)arg2 completion:(id /* block */)arg3;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })aiffFileASBD;
+ (id)alertMuteBehaviorDict;
+ (id)alertMuteSettings;
+ (id)assetHashInResourcePath:(id)arg1;
+ (void)clearLogFilesInDirectory:(id)arg1 matchingPattern:(id)arg2 exceedNumber:(unsigned long long)arg3;
+ (id)convertToFloatLPCMBufFromShortLPCMBuf:(id)arg1;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1;
+ (void)createDirectoryIfDoesNotExist:(id)arg1;
+ (id)deviceBuildVersion;
+ (id)deviceProductType;
+ (id)deviceProductVersion;
+ (id)deviceUserAssignedName;
+ (id)getFixedHighPrioritySerialQueueWithLabel:(id)arg1;
+ (id)getFixedPrioritySerialQueueWithLabel:(id)arg1 fixedPriority:(int)arg2;
+ (double)getHostClockFrequency;
+ (double)getHostClockFrequency;
+ (unsigned int)getNumElementInBitset:(unsigned long long)arg1;
+ (id)getSiriLanguageWithFallback:(id)arg1;
+ (bool)hasRemoteBuiltInMic;
+ (bool)hasRemoteCoreSpeech;
+ (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (float)hostTimeToSeconds:(unsigned long long)arg1;
+ (float)hostTimeToSeconds:(unsigned long long)arg1;
+ (double)hostTimeToTimeInterval:(unsigned long long)arg1;
+ (double)hostTimeToTimeInterval:(unsigned long long)arg1;
+ (bool)isRecordContextAutoPrompt:(id)arg1;
+ (bool)isRecordContextRaiseToSpeak:(id)arg1;
+ (bool)isRecordContextSpeakerIdTrainingTrigger:(id)arg1;
+ (bool)isRecordContextVoiceTrigger:(id)arg1;
+ (bool)isRecordingContextBTDT:(id)arg1;
+ (bool)isRecordingContextHDVC:(id)arg1;
+ (bool)isSpidAssetsAvailable;
+ (void)iterateBitset:(unsigned long long)arg1 block:(id /* block */)arg2;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })lpcmASBD;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })lpcmInt16ASBD;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })lpcmInt16NarrowBandASBD;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })lpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })lpcmNarrowBandASBD;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })lpcmNonInterleavedASBD;
+ (id)lpcmRecordSettings;
+ (unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)arg1;
+ (unsigned long long)macHostTimeFromBridgeHostTime:(unsigned long long)arg1;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })opusASBD;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })opusNarrowBandASBD;
+ (id)opusRecordSettings;
+ (bool)readAudioChunksFrom:(id)arg1 block:(id /* block */)arg2;
+ (void)removeLogFilesInDirectory:(id)arg1 matchingPattern:(id)arg2 beforeDays:(float)arg3;
+ (id)rootQueueWithFixedPriority:(int)arg1;
+ (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 anchorHostTime:(unsigned long long)arg2 anchorSampleCount:(unsigned long long)arg3;
+ (id)satConfigFileNameForCSSpIdType:(unsigned long long)arg1;
+ (unsigned long long)secondsToHostTime:(float)arg1;
+ (unsigned long long)secondsToHostTime:(float)arg1;
+ (bool)shouldDeinterleaveAudioOnCS;
+ (bool)shouldRunVTOnCS;
+ (bool)spIdAudioLogsCountLimitReached;
+ (id)spIdAudioLogsDir;
+ (id)spIdAudioLogsGradingDir;
+ (id)spIdSATAudioDirForLocale:(id)arg1 userName:(id)arg2 spidType:(unsigned long long)arg3;
+ (id)spIdSATDirForLocale:(id)arg1;
+ (id)spIdSATDirForLocale:(id)arg1 userName:(id)arg2;
+ (id)spIdSATDirForLocale:(id)arg1 userName:(id)arg2 spidType:(unsigned long long)arg3;
+ (id)spIdSATModelDirForLocale:(id)arg1 userName:(id)arg2 spidType:(unsigned long long)arg3;
+ (id)spIdSiriDebugGradingDataRootDirectory;
+ (id)spIdSiriDebugTrainedUsersFilePathForLocale:(id)arg1;
+ (id)spIdSiriDebugVTDataDirectory;
+ (id)spIdSiriDebugVoiceProfileRootDirectoryForProfile:(id)arg1 locale:(id)arg2;
+ (id)spIdSiriDebugVoiceProfileStoreRootDirectory;
+ (id)spIdSiriDebugVoiceProfileStoreRootDirectoryForLocale:(id)arg1;
+ (unsigned long long)spIdTypeForString:(id)arg1;
+ (id)spIdVoiceProfileImportRootDir;
+ (id)speexRecordSettings;
+ (id)spidAudioTrainUtterancesDir;
+ (void)streamAudioFromFileUrl:(id)arg1 audioStreamBasicDescriptor:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2 samplesPerStreamChunk:(unsigned long long)arg3 audioDataAvailableHandler:(id /* block */)arg4;
+ (id)stringForCSSATRunMode:(unsigned long long)arg1;
+ (id)stringForCSSpIdType:(unsigned long long)arg1;
+ (id)stringForInvocationStyle:(unsigned long long)arg1;
+ (bool)supportCSTwoShotDecision;
+ (bool)supportCircularBuffer;
+ (bool)supportContinuousVoiceTrigger;
+ (bool)supportHybridEndpointer;
+ (bool)supportImplicitTraining;
+ (bool)supportKeywordDetector;
+ (bool)supportOpportunisticZLL;
+ (bool)supportPacketDecoding;
+ (bool)supportPremiumAssets;
+ (bool)supportPremiumModel;
+ (bool)supportRaiseToSpeak;
+ (bool)supportSAT;
+ (bool)supportSelfTriggerSuppression;
+ (bool)supportSmartVolume;
+ (double)systemUpTime;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })utteranceFileASBD;
+ (id)voiceTriggerRecordContext;

@end
