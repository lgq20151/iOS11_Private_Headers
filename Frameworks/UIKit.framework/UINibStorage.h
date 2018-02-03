/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINibStorage : NSObject {
    NSData * archiveData;
    NSBundle * bundle;
    NSString * bundleDirectoryName;
    NSString * bundleResourceName;
    bool  captureImplicitLoadingContextOnDecode;
    NSString * identifierForStringsFile;
    bool  instantiatingForSimulator;
    UINibDecoder * nibDecoder;
}

@property (nonatomic, copy) NSData *archiveData;
@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, copy) NSString *bundleDirectoryName;
@property (nonatomic, copy) NSString *bundleResourceName;
@property bool captureImplicitLoadingContextOnDecode;
@property (nonatomic, copy) NSString *identifierForStringsFile;
@property (nonatomic) bool instantiatingForSimulator;
@property (nonatomic, retain) UINibDecoder *nibDecoder;

- (void).cxx_destruct;
- (id)archiveData;
- (id)bundle;
- (id)bundleDirectoryName;
- (id)bundleResourceName;
- (bool)captureImplicitLoadingContextOnDecode;
- (id)identifierForStringsFile;
- (bool)instantiatingForSimulator;
- (id)nibDecoder;
- (void)setArchiveData:(id)arg1;
- (void)setBundle:(id)arg1;
- (void)setBundleDirectoryName:(id)arg1;
- (void)setBundleResourceName:(id)arg1;
- (void)setCaptureImplicitLoadingContextOnDecode:(bool)arg1;
- (void)setIdentifierForStringsFile:(id)arg1;
- (void)setInstantiatingForSimulator:(bool)arg1;
- (void)setNibDecoder:(id)arg1;

@end
