/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICreatePDFActivityItem : NSObject <QLPreviewItem> {
    NSString * _previewItemTitle;
    NSURL * _previewItemURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *previewItemTitle;
@property (nonatomic, retain) NSURL *previewItemURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)setPreviewItemTitle:(id)arg1;
- (void)setPreviewItemURL:(id)arg1;

@end
