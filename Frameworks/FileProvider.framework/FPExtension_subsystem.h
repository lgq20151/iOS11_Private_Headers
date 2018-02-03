/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPExtension_subsystem : NSObject <PKModularService> {
    NSDictionary * _infoDictionary;
    bool  _initialized;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *infoDictionary;
@property (readonly) Class superclass;

+ (id)initForPlugInKit;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;
- (void)endUsing:(id)arg1;
- (id)infoDictionary;
- (void)setInfoDictionary:(id)arg1;

@end
