/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARSectionAndScore : NSObject {
    bool  _enableSectionRanking;
    NSNumber * _sectionCtr;
    double  _topScore;
}

@property (nonatomic) bool enableSectionRanking;
@property (nonatomic, retain) NSNumber *sectionCtr;
@property (nonatomic) double topScore;

- (void).cxx_destruct;
- (bool)enableSectionRanking;
- (id)sectionCtr;
- (void)setEnableSectionRanking:(bool)arg1;
- (void)setSectionCtr:(id)arg1;
- (void)setTopScore:(double)arg1;
- (double)topScore;

@end
