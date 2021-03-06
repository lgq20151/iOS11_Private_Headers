/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAPdfRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {
    NSString * mPassphraseOpen;
    NSString * mPassphrasePrintCopy;
    TSARenderingExporter * mRenderingExporter;
    int  mRenderingQuality;
    bool  mRequireCopyPassword;
    bool  mRequireOpenPassword;
    bool  mRequirePrintPassword;
}

- (void)dealloc;
- (id)initWithRenderingExporter:(id)arg1;
- (struct CGContext { }*)newCGContextForURL:(id)arg1;
- (void)releaseCGContext:(struct CGContext { }*)arg1;
- (int)renderingQuality;
- (void)setCopyPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPrintPassphrase:(id)arg1 hint:(id)arg2;
- (void)setRenderingQuality:(int)arg1;
- (void)setup;
- (bool)supportsPaging;
- (bool)supportsRenderingQuality;
- (void)teardown;
- (bool)validatePassphrases:(id*)arg1;
- (double)viewScale;

@end
