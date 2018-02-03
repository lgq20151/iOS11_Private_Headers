/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAvoidanceCoordinator : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _avoidanceFrame;
    NSMutableDictionary * _blockades;
    NSMutableSet * _clients;
    int  _recurseCount;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } avoidanceFrame;

- (void).cxx_destruct;
- (void)addAvoidanceObject:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avoidanceFrame;
- (void)dealloc;
- (id)findBlockadesForName:(id)arg1;
- (id)findClientsForBlockade:(id)arg1;
- (id)findNamesForBlockade:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)releaseAll:(id)arg1 withType:(unsigned long long)arg2;
- (void)removeAvoidanceObject:(id)arg1;
- (void)setAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGroupOfBlockades:(id)arg1 forBlockadeIdentifier:(id)arg2;
- (void)updateClients:(id)arg1;

@end
