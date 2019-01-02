/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCSavedRecordingsModel : NSObject <NSFetchedResultsControllerDelegate> {
    NSEntityDescription * _cloudRecordingEntity;
    NSPersistentStore * _cloudStore;
    RCPersistentContainer * _container;
    NSManagedObjectContext * _context;
    bool  _disableSaveNotifications;
    RCSavedRecordingsController * _evictedRecordingsController;
    long long  _isSavingDisabledCount;
    NSPersistentStore * _localStore;
    RCDatabaseMetadata * _metadata;
    NSCloudKitMirroringRequestOptions * _mirroringOptions;
    RCSavedRecordingsController * _recordingsController;
    bool  _valid;
}

@property (nonatomic, readonly) NSArray *allRecordings;
@property (nonatomic, readonly) NSSet *audioProperties;
@property (nonatomic, readonly) NSPersistentContainer *container;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSData *currentChangeToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableSaveNotifications;
@property (nonatomic, readonly) NSArray *evictedRecordings;
@property (nonatomic, readonly) RCSavedRecordingsController *evictedRecordingsController;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long isSavingDisabledCount;
@property (nonatomic, readonly) NSArray *recordings;
@property (nonatomic, readonly) RCSavedRecordingsController *recordingsController;
@property (readonly) Class superclass;
@property bool valid;

+ (id)_copyFileIntoRecordingsDirectory:(id)arg1;
+ (id)_dateFormatterComponentFormatting;
+ (void)_importImportableRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)_insertRecordingWithImportableAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)_moveFileIntoRecordingsDirectory:(id)arg1;
+ (id)cloudMirroringModel;
+ (id)creationDateFromStandardRecordingURL:(id)arg1;
+ (id)currentLocationBasedName;
+ (void)determineImportabilityOfRecordingWithAudioURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)importRecordingWithSourceAudioURL:(id)arg1 name:(id)arg2 date:(id)arg3 completionHandler:(id /* block */)arg4;
+ (bool)migrateDatabaseIfNecessary;
+ (id)newPrivateModel;
+ (id)newSyncModel;
+ (id)savedRecordingsDirectory;
+ (id)sharedModelForQueue:(id)arg1;
+ (id)sharedModelForQueue_shouldNotBeCalledDuringSyncing:(id)arg1;
+ (id)standardPathForRecording:(id)arg1;
+ (id)standardPathForRecordingWithCreationDate:(id)arg1 uniqueID:(id)arg2;
+ (id)standardURLForRecordingWithCreationDate:(id)arg1;
+ (id)startStoreServers;

- (void).cxx_destruct;
- (bool)__saveManagedObjectContext:(id*)arg1;
- (id)_allTitles;
- (void)_deleteRecordingsWithDurationLessThan:(double)arg1 passingTest:(id /* block */)arg2;
- (void)_deliverSaveNotifications;
- (void)_enumerateFetchedRecordingTitles:(id /* block */)arg1;
- (void)_enumerateRecordingsWithEntityDescription:(id)arg1 propertiesToFetch:(id)arg2 withBlock:(id /* block */)arg3;
- (id)_initWithContainer:(id)arg1 concurrencyType:(unsigned long long)arg2;
- (id)_labelPresetsForQuery:(id)arg1;
- (id)_recordingWithUniqueID:(id)arg1 templateName:(id)arg2;
- (void)_scheduleAutomaticRecordingDeletions;
- (id)allRecordings;
- (id)audioProperties;
- (id)cloudRecordingEntity;
- (id)cloudStore;
- (id)container;
- (id)context;
- (void)controllerDidChangeContent:(id)arg1;
- (unsigned long long)count;
- (id)currentChangeToken;
- (id)currentPersistentHistoryToken;
- (void)dealloc;
- (void)deleteAllEvictedRecordings;
- (bool)deleteDatabaseProperty:(id)arg1;
- (void)deleteRecording:(id)arg1;
- (void)deleteRecordingsEvictedBeforeDate:(id)arg1;
- (bool)disableSaveNotifications;
- (id)duplicateRecording:(id)arg1 error:(id*)arg2;
- (id)enumerateChangeHistorySinceToken:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)enumerateExistingRecordingsSinceChangeToken:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateExistingRecordingsWithBlock:(id /* block */)arg1;
- (void)evictRecording:(id)arg1;
- (id)evictedRecordings;
- (id)evictedRecordingsController;
- (bool)exportToCloud:(id /* block */)arg1;
- (bool)fetchObjectsFromCloud:(id)arg1 entityToAttributesToFetch:(struct NSDictionary { Class x1; }*)arg2 completionHandler:(id /* block */)arg3;
- (void)finishSaveByUpdatingSearchableIndexWithChangeContext:(id)arg1;
- (bool)hasExistingRecordingForAudioFile:(id)arg1;
- (bool)importFromCloud:(id /* block */)arg1;
- (id)indexPathForRecording:(id)arg1;
- (id)init;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customLabelBase:(id)arg4;
- (id)insertRecordingWithAudioFile:(id)arg1 duration:(double)arg2 date:(id)arg3 customTitleBase:(id)arg4 uniqueID:(id)arg5;
- (long long)isSavingDisabledCount;
- (id)metadataValueForKey:(id)arg1;
- (id)mirroringOptions;
- (id)mostRecentRecording;
- (id)nextRecordingDefaultLabelWithCustomLabelBase:(id)arg1;
- (id)nextRecordingDefaultLabelWithCustomTitleBase:(id)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (void)performBlockAndWaitInTemporaryContext:(id /* block */)arg1;
- (void)performWithSavingDisabled:(id /* block */)arg1;
- (id)recordingAtIndex:(unsigned long long)arg1;
- (id)recordingWithID:(id)arg1;
- (id)recordingWithITunesPersistentID:(long long)arg1;
- (id)recordingWithURIRepresentation:(id)arg1;
- (id)recordingWithUniqueID:(id)arg1;
- (id)recordings;
- (id)recordingsController;
- (id)recordingsForSpotlightSearch:(id)arg1;
- (bool)resetCloud:(id /* block */)arg1;
- (void)restoreEvictedRecording:(id)arg1;
- (void)saveIfNecessary;
- (bool)saveIfNecessary:(id*)arg1;
- (void)setDisableSaveNotifications:(bool)arg1;
- (void)setIsSavingDisabledCount:(long long)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setTitle:(id)arg1 ofRecording:(id)arg2;
- (void)setValid:(bool)arg1;
- (bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2 save:(bool)arg3;
- (bool)valid;
- (id)valueForDatabaseProperty:(id)arg1;

@end