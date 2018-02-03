/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIActivityApplicationExtensionDiscovery : NSObject {
    id  _extensionMatchingContext;
    NSArray * _extensionPointIdentifiers;
    bool  _performsInitialMatching;
}

@property (retain) id extensionMatchingContext;
@property (nonatomic, copy) NSArray *extensionPointIdentifiers;
@property bool performsInitialMatching;

+ (id)extensionBasedActivityForExtension:(id)arg1;
+ (id)extensionMatchingDictionariesForExtensionItems:(id)arg1;

- (void).cxx_destruct;
- (id)activitiesForMatchingContext:(id)arg1 error:(id*)arg2 updateBlock:(id /* block */)arg3;
- (void)cancelActivityMatchingUpdates;
- (void)dealloc;
- (id)extensionMatchingContext;
- (id)extensionPointIdentifiers;
- (id)init;
- (id)initWithExtensionPointIdentifiers:(id)arg1;
- (bool)performsInitialMatching;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)setExtensionPointIdentifiers:(id)arg1;
- (void)setPerformsInitialMatching:(bool)arg1;

@end
