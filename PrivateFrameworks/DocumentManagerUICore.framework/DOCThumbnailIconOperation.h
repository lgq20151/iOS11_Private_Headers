/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCThumbnailIconOperation : DOCThumbnailBaseOperation {
    NSString * _contentType;
    bool  _folded;
}

@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) bool folded;

+ (id)synchronousDocumentIconForContentType:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(bool)arg5;
+ (id)synchronousFolderIcon:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 icon:(id)arg4 style:(unsigned long long)arg5;
+ (id)synchronousFolderIconWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 style:(unsigned long long)arg3;
+ (id)synchronousIconForContentType:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(bool)arg5;

- (void).cxx_destruct;
- (id)contentType;
- (bool)folded;
- (bool)generateThumbnail:(id*)arg1 representativeIcon:(bool*)arg2;
- (id)initWithContentType:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 delegate:(id)arg4 style:(unsigned long long)arg5 folded:(bool)arg6 qos:(unsigned int)arg7;

@end
