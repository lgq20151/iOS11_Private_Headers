/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentMetadata : PBCodable <NSCopying> {
    NSString * _LaunchId;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _RequiredEntitlements;
    NSString * _SystemExtensionBundleId;
    bool  _backgroundLaunch;
    bool  _confirmed;
    struct { 
        unsigned int triggerMethod : 1; 
        unsigned int backgroundLaunch : 1; 
        unsigned int confirmed : 1; 
    }  _has;
    NSString * _intentDescription;
    NSString * _intentId;
    int  _triggerMethod;
    PBUnknownFields * _unknownFields;
    _INPBString * _userUtterance;
}

@property (nonatomic, retain) NSString *LaunchId;
@property (nonatomic, readonly) int*RequiredEntitlements;
@property (nonatomic, readonly) unsigned long long RequiredEntitlementsCount;
@property (nonatomic, retain) NSString *SystemExtensionBundleId;
@property (nonatomic) bool backgroundLaunch;
@property (nonatomic) bool confirmed;
@property (nonatomic) bool hasBackgroundLaunch;
@property (nonatomic) bool hasConfirmed;
@property (nonatomic, readonly) bool hasIntentDescription;
@property (nonatomic, readonly) bool hasIntentId;
@property (nonatomic, readonly) bool hasLaunchId;
@property (nonatomic, readonly) bool hasSystemExtensionBundleId;
@property (nonatomic) bool hasTriggerMethod;
@property (nonatomic, readonly) bool hasUserUtterance;
@property (nonatomic, retain) NSString *intentDescription;
@property (nonatomic, retain) NSString *intentId;
@property (nonatomic) int triggerMethod;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBString *userUtterance;

+ (id)options;

- (void).cxx_destruct;
- (id)LaunchId;
- (int)RequiredEntitlementAtIndex:(unsigned long long)arg1;
- (int*)RequiredEntitlements;
- (id)RequiredEntitlementsAsString:(int)arg1;
- (unsigned long long)RequiredEntitlementsCount;
- (int)StringAsRequiredEntitlements:(id)arg1;
- (int)StringAsTriggerMethod:(id)arg1;
- (id)SystemExtensionBundleId;
- (void)addRequiredEntitlement:(int)arg1;
- (bool)backgroundLaunch;
- (void)clearRequiredEntitlements;
- (bool)confirmed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBackgroundLaunch;
- (bool)hasConfirmed;
- (bool)hasIntentDescription;
- (bool)hasIntentId;
- (bool)hasLaunchId;
- (bool)hasSystemExtensionBundleId;
- (bool)hasTriggerMethod;
- (bool)hasUserUtterance;
- (unsigned long long)hash;
- (id)intentDescription;
- (id)intentId;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBackgroundLaunch:(bool)arg1;
- (void)setConfirmed:(bool)arg1;
- (void)setHasBackgroundLaunch:(bool)arg1;
- (void)setHasConfirmed:(bool)arg1;
- (void)setHasTriggerMethod:(bool)arg1;
- (void)setIntentDescription:(id)arg1;
- (void)setIntentId:(id)arg1;
- (void)setLaunchId:(id)arg1;
- (void)setRequiredEntitlements:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSystemExtensionBundleId:(id)arg1;
- (void)setTriggerMethod:(int)arg1;
- (void)setUserUtterance:(id)arg1;
- (int)triggerMethod;
- (id)triggerMethodAsString:(int)arg1;
- (id)unknownFields;
- (id)userUtterance;
- (void)writeTo:(id)arg1;

@end
