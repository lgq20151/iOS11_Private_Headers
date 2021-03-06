/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFaceDetailDataSourcesSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailToggleCellDelegate> {
    <NTKCFaceDetailDataSourcesSectionDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailDataSourcesSectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *rows;
@property (readonly) Class superclass;

+ (bool)hasDataSourcesSectionForFace:(id)arg1 inGallery:(bool)arg2;

- (void).cxx_destruct;
- (void)_buildRows;
- (void)_commonInit;
- (id)_getDisabledDataSources;
- (void)dealloc;
- (id)delegate;
- (void)faceDidChange;
- (void)setDelegate:(id)arg1;
- (id)titleForHeader;
- (void)toggleCell:(id)arg1 didToggle:(bool)arg2;

@end
