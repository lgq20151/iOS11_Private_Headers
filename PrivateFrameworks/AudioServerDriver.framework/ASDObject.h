/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDObject : NSObject {
    NSMutableArray * _customProperties;
    NSObject<OS_dispatch_queue> * _customPropertyQueue;
    unsigned int  _objectID;
    ASDObject * _owner;
    ASDPlugin * _plugin;
    <ASDPropertyChangedDelegate> * _propertyChangedDelegate;
}

@property (nonatomic, readonly) unsigned int baseClass;
@property (nonatomic, readonly) unsigned int objectClass;
@property (nonatomic) unsigned int objectID;
@property (nonatomic) ASDObject *owner;
@property (nonatomic) ASDPlugin *plugin;
@property (nonatomic) <ASDPropertyChangedDelegate> *propertyChangedDelegate;

- (void).cxx_destruct;
- (void)addCustomProperty:(id)arg1;
- (unsigned int)baseClass;
- (id)customProperties;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void*)arg3;
- (void)dealloc;
- (bool)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(void*)arg5 forClient:(int)arg6;
- (bool)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)init;
- (id)initWithPlugin:(id)arg1;
- (bool)isKindOfAudioClass:(unsigned int)arg1;
- (bool)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (unsigned int)objectClass;
- (unsigned int)objectID;
- (id)owner;
- (id)plugin;
- (id)propertyChangedDelegate;
- (void)removeCustomProperty:(id)arg1;
- (void)setObjectID:(unsigned int)arg1;
- (void)setOwner:(id)arg1;
- (void)setPlugin:(id)arg1;
- (bool)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int)arg4 andData:(const void*)arg5 forClient:(int)arg6;
- (void)setPropertyChangedDelegate:(id)arg1;

@end
