/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUExtensionAssembly : NSObject <NFAssembly> {
    <NUExtensionContextProvider> * _extensionContextProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUExtensionContextProvider> *extensionContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)extensionContextProvider;
- (id)initWithExtensionContextProvider:(id)arg1;
- (void)loadPublicContainer:(id)arg1 privateContainer:(id)arg2;

@end
