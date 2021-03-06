/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTopicalLeafNode : NSObject {
    FCTopicalNode * _node;
    double  _score;
}

@property (nonatomic, retain) FCTopicalNode *node;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (id)initWithNode:(id)arg1 score:(double)arg2;
- (id)node;
- (double)score;
- (void)setNode:(id)arg1;
- (void)setScore:(double)arg1;

@end
