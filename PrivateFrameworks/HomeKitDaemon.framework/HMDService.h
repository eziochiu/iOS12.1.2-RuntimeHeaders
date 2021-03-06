/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDService : HMFObject <HMDBackingStoreObjectProtocol, HMDBulletinIdentifiers, HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding> {
    HMDHAPAccessory * _accessory;
    HMDApplicationData * _appData;
    NSString * _associatedServiceType;
    HMDBulletinBoardNotification * _bulletinBoardNotification;
    NSUUID * _cachedAccessoryUUID;
    NSArray * _characteristics;
    NSNumber * _configurationState;
    NSMutableDictionary * _deviceLastRequestPresenceDateMap;
    NSString * _expectedConfiguredName;
    bool  _hidden;
    NSNumber * _instanceID;
    bool  _isEmptyConfiguredNameAllowed;
    NSNumber * _labelIndex;
    NSNumber * _labelNamespace;
    NSString * _lastSeenConfiguredName;
    NSArray * _linkedServices;
    HMFMessageDispatcher * _messageDispatcher;
    NSString * _name;
    <HMDServiceOwner> * _owner;
    bool  _primary;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSString * _providedName;
    NSString * _serviceSubtype;
    NSString * _serviceType;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) HMDHAPAccessory *accessory;
@property (nonatomic, retain) HMDApplicationData *appData;
@property (nonatomic, readonly) NSString *associatedServiceType;
@property (nonatomic, retain) HMDBulletinBoardNotification *bulletinBoardNotification;
@property (nonatomic, retain) NSUUID *cachedAccessoryUUID;
@property (nonatomic, copy) NSArray *characteristics;
@property (nonatomic, retain) NSNumber *configurationState;
@property (nonatomic, readonly, copy) NSString *contextID;
@property (nonatomic, readonly, copy) NSUUID *contextSPIUniqueIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *defaultName;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *deviceLastRequestPresenceDateMap;
@property (nonatomic, copy) NSString *expectedConfiguredName;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, readonly) HMDHome *home;
@property (nonatomic, copy) NSNumber *instanceID;
@property (nonatomic) bool isEmptyConfiguredNameAllowed;
@property (nonatomic, retain) NSNumber *labelIndex;
@property (nonatomic, retain) NSNumber *labelNamespace;
@property (nonatomic, copy) NSString *lastSeenConfiguredName;
@property (nonatomic, copy) NSArray *linkedServices;
@property (nonatomic, readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) <HMDServiceOwner> *owner;
@property (getter=isPrimary) bool primary;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) NSString *providedName;
@property (nonatomic, readonly, copy) NSString *serviceIdentifier;
@property (nonatomic, retain) NSString *serviceSubtype;
@property (nonatomic, retain) NSString *serviceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)generateUUIDWithAccessoryUUID:(id)arg1 serviceID:(id)arg2;
+ (bool)hasMessageReceiverChildren;
+ (bool)supportsSecureCoding;
+ (bool)validateProvidedName:(id)arg1;

- (void).cxx_destruct;
- (void)_createNotification;
- (void)_handleSetAppData:(id)arg1;
- (void)_readRequiredBTLECharacteristicValuesForceReadFWVersion:(bool)arg1;
- (void)_recalculateUUID;
- (void)_registerForMessages;
- (void)_saveCurrentNameAsExpectedAndLastSeen:(id)arg1;
- (void)_setServiceProperties:(id)arg1;
- (void)_shouldServiceBeHidden;
- (bool)_supportsBulletinNotification;
- (void)_transactionServiceUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)_updateAllowsEmptyName;
- (bool)_updateExpectedConfiguredName:(id)arg1;
- (bool)_updateLastSeenConfiguredName:(id)arg1;
- (id)_updateProvidedName:(id)arg1;
- (id)accessory;
- (id)appData;
- (void)appDataRemoved:(id)arg1 message:(id)arg2;
- (void)appDataUpdated:(id)arg1 message:(id)arg2;
- (id)assistantObject;
- (id)associatedServiceType;
- (id)backingStoreObjects:(long long)arg1;
- (id)bulletinBoardNotification;
- (id)cachedAccessoryUUID;
- (id)characteristics;
- (id)configurationState;
- (void)configureBulletinNotification:(id /* block */)arg1;
- (void)configureMsgDispatcher:(id)arg1;
- (id)configureWithService:(id)arg1 accessory:(id)arg2;
- (id)configureWithService:(id)arg1 accessory:(id)arg2 shouldRead:(bool)arg3;
- (id)contextID;
- (id)contextSPIUniqueIdentifier;
- (id)defaultName;
- (id)description;
- (id)deviceLastRequestPresenceDateMap;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedConfiguredName;
- (id)findCharacteristic:(id)arg1;
- (id)findCharacteristicWithType:(id)arg1;
- (id)gatherRequiredReadRequestsForceReadFWVersion:(bool)arg1;
- (id)getConfiguredName;
- (id)home;
- (id)init;
- (id)initWithAccessory:(id)arg1 owner:(id)arg2 instance:(id)arg3 uuid:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1 accessory:(id)arg2 owner:(id)arg3;
- (id)instanceID;
- (bool)isEmptyConfiguredNameAllowed;
- (bool)isHidden;
- (bool)isPrimary;
- (bool)isReadingRequiredForBTLEServiceCharacteristic:(id)arg1;
- (id)labelIndex;
- (id)labelNamespace;
- (id)lastSeenConfiguredName;
- (id)linkedServices;
- (bool)listsEqual:(id)arg1 to:(id)arg2;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)name;
- (id)owner;
- (id)propertyQueue;
- (id)providedName;
- (id)serviceIdentifier;
- (id)serviceSubtype;
- (id)serviceType;
- (void)setAppData:(id)arg1;
- (void)setBulletinBoardNotification:(id)arg1;
- (void)setCachedAccessoryUUID:(id)arg1;
- (void)setCharacteristics:(id)arg1;
- (void)setConfigurationState:(id)arg1;
- (void)setDeviceLastRequestPresenceDateMap:(id)arg1;
- (void)setExpectedConfiguredName:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setIsEmptyConfiguredNameAllowed:(bool)arg1;
- (void)setLabelIndex:(id)arg1;
- (void)setLabelNamespace:(id)arg1;
- (void)setLastSeenConfiguredName:(id)arg1;
- (void)setLinkedServices:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setPrimary:(bool)arg1;
- (void)setProvidedName:(id)arg1;
- (void)setServiceSubtype:(id)arg1;
- (void)setServiceType:(id)arg1;
- (bool)shouldEnableDaemonRelaunch;
- (bool)shouldIncludePresenceForDeviceWithDestination:(id)arg1;
- (bool)shouldUpdateLastSeenConfiguredName:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)type;
- (bool)updateAssociatedServiceType:(id)arg1 error:(id*)arg2;
- (bool)updateCharacteristics:(id)arg1;
- (void)updateLastKnownValues;
- (void)updatePresenceRequestTimeForDeviceWithDestination:(id)arg1;
- (id)url;
- (id)uuid;

@end
