/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIRemoteViewService : NSObject {
    NSUUID * _contextToken;
    NSExtension * _extension;
    bool  _overridesHostAppearance;
}

@property (nonatomic, copy) NSUUID *contextToken;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, readonly) bool overridesHostAppearance;
@property (nonatomic, retain) <PKPlugIn> *plugin;

- (void).cxx_destruct;
- (id)contextToken;
- (id)extension;
- (id)initWithExtension:(id)arg1 andContextToken:(id)arg2;
- (id)initWithPlugIn:(id)arg1 andContextToken:(id)arg2;
- (bool)overridesHostAppearance;
- (id)plugin;
- (void)setContextToken:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setPlugin:(id)arg1;
- (void)updateOverridesHostAppearance;

@end
