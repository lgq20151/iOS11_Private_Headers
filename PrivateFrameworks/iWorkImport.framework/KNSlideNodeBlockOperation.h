/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideNodeBlockOperation : NSBlockOperation {
    KNSlideNode * _slideNode;
}

@property (nonatomic) KNSlideNode *slideNode;

- (void).cxx_destruct;
- (id)initWithSlideNode:(id)arg1;
- (void)setSlideNode:(id)arg1;
- (id)slideNode;

@end