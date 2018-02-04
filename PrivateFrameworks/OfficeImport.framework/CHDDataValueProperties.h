/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDDataValueProperties : NSObject <EDKeyedObject> {
    CHDDataLabel * mDataLabel;
    unsigned long long  mDataValueIndex;
    OADGraphicProperties * mGraphicProperties;
    CHDMarker * mMarker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)dataValueProperties;

- (id)dataLabel;
- (unsigned long long)dataValueIndex;
- (void)dealloc;
- (id)description;
- (id)graphicProperties;
- (id)init;
- (long long)key;
- (id)marker;
- (void)setDataLabel:(id)arg1;
- (void)setDataValueIndex:(unsigned long long)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setMarker:(id)arg1;
- (id)shallowCopyWithIndex:(unsigned long long)arg1;

@end