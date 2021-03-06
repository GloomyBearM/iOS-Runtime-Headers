/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKStandaloneWiggleRotateAnimator : GKWiggleRotateAnimator {
    GKBubbleFlowContainerView *_containerView;
    int _rotationDirection;
    _GKBubbleFlowPathTransitionInfo *_transitionContext;
}

@property (nonatomic, retain) GKBubbleFlowContainerView *containerView;
@property (nonatomic) int rotationDirection;
@property (nonatomic, retain) _GKBubbleFlowPathTransitionInfo *transitionContext;

- (void)animate;
- (void)animateForBubbleContainer:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)containerView;
- (void)dealloc;
- (void)readEndingPositions;
- (void)readStartingPositions;
- (BOOL)rotatingRightWithTransitionContext:(id)arg1;
- (int)rotationDirection;
- (void)setContainerView:(id)arg1;
- (void)setRotationDirection:(int)arg1;
- (void)setTransitionContext:(id)arg1;
- (id)transitionContext;
- (id)transitionContextCreatingIfNeeded;

@end
