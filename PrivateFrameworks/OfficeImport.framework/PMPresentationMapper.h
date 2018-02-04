/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMPresentationMapper : CMMapper <CMMapperRoot> {
    CMArchiveManager * mArchiver;
    OIXMLElement * mBodyElement;
    unsigned int  mCurrentSlide;
    bool  mHasPushedFirstSlides;
    unsigned int  mNextCommit;
    PDPresentation * mPresentation;
    NSString * mResourceUrlPrefix;
    NSString * mResourceUrlProtocol;
    NSMutableArray * mSlideGuids;
    NSMutableArray * mSlideNames;
    int  mWidth;
    OIXMLDocument * mXhtmlDoc;
}

- (void).cxx_destruct;
- (void)_pushEmptySlideWithMessage:(id)arg1;
- (id)archiver;
- (id)blipAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)documentTitle;
- (void)finishMappingWithState:(id)arg1;
- (id)initWithPDPresentation:(id)arg1 archiver:(id)arg2;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(bool)arg4;
- (struct CGSize { double x1; double x2; })pageSizeForDevice;
- (void)setHtmlDocumentSizeInArchiver;
- (struct CGSize { double x1; double x2; })slideSize;
- (void)startMappingWithState:(id)arg1;

@end