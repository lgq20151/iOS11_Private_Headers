/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupMapSnippetTemplate : SAIntentGroupSnippetTemplate

@property (nonatomic, retain) SAUIColor *color;
@property (nonatomic, retain) SAIntentGroupDetailLabelTemplateComponent *detailLabelComponent;
@property (nonatomic) bool interactive;
@property (nonatomic, retain) SALocation *location;
@property (nonatomic, copy) NSString *mapSize;
@property (nonatomic, retain) <SAIntentGroupSetMapLocation> *updateLocationCommand;

+ (id)mapSnippetTemplate;
+ (id)mapSnippetTemplateWithDictionary:(id)arg1 context:(id)arg2;

- (id)color;
- (id)detailLabelComponent;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)interactive;
- (id)location;
- (id)mapSize;
- (void)setColor:(id)arg1;
- (void)setDetailLabelComponent:(id)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapSize:(id)arg1;
- (void)setUpdateLocationCommand:(id)arg1;
- (id)updateLocationCommand;

@end