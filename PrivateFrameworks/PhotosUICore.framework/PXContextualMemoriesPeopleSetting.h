/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXContextualMemoriesPeopleSetting : NSObject <PXContextualMemoriesSetting> {
    NSArray * _peopleNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *headerTitle;
@property (nonatomic, retain) NSArray *peopleNames;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)headerTitle;
- (id)peopleNames;
- (void)requestPeopleNamesUpdateWithCompletionHandler:(id /* block */)arg1;
- (void)resetToDefault;
- (void)setPeopleNames:(id)arg1;
- (id)title;

@end
