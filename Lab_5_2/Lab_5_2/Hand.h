#pragma once
template <typename T>
class Hand
{
private:
    T hand;
public:
	Hand(T hand) :hand(hand) {}
	T getHand() {
		return hand;
	}
	void setHand(T hand) {
		this->hand = hand;
	}
};

